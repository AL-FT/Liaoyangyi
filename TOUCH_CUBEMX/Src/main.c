/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "dma.h"
#include "tim.h"
#include "gpio.h"
#include "fsmc.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */


#include "lcd.h"
#include "key.h"
#include "24cxx.h"
#include "touch.h"
#include "delay.h"	
#include "led.h"
#include "lvgl.h"
#include "lv_conf.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_example_event.h"
#include "test_demo.h"
#include "ui.h"
#include "ui_helpers.h"
#include "beep.h"
#include "ws2812.h"
#include "user_time.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
int time_tick = 0;	//ʱ��
int Hotwind_S = 0;
int Hotwind_M = 0;
int Watermist_S = 0;
int Watermist_M = 0;
int Light_S = 0;
int Light_M = 0;
	
int c_red = 0;
int c_green = 0;
int c_blue = 0;
char flash_state = 0;	//Ƶ������

extern int Set_time1,Set_time2,Set_time3;
extern char Hotwind_state,Watermist_state,Light_state;
//�����Ļ�������Ͻ���ʾ"RST"
void Load_Drow_Dialog(void)
{
	LCD_Clear(WHITE);//����   
 	POINT_COLOR=BLUE;//��������Ϊ��ɫ 
	LCD_ShowString(lcddev.width-24,0,200,16,16,"RST");//��ʾ��������
  	POINT_COLOR=RED;//���û�����ɫ 
}

void rtp_test(void)
{
	u8 key;
	u8 i=0;	  
	while(1)
	{
	 	key=KEY_Scan(0);
		tp_dev.scan(0); 		 
		if(tp_dev.sta&TP_PRES_DOWN)			//������������
		{	
		 	if(tp_dev.x[0]<lcddev.width&&tp_dev.y[0]<lcddev.height)
			{	
				if(tp_dev.x[0]>(lcddev.width-24)&&tp_dev.y[0]<16)Load_Drow_Dialog();//���
				else TP_Draw_Big_Point(tp_dev.x[0],tp_dev.y[0],RED);		//��ͼ	  			   
			}
		}else delay_ms(10);	//û�а������µ�ʱ�� 	    
		if(key==KEY0_PRES)	//KEY0����,��ִ��У׼����
		{
			LCD_Clear(WHITE);	//����
		    TP_Adjust();  		//��ĻУ׼ 
			TP_Save_Adjdata();	 
			Load_Drow_Dialog();
		}
		i++;
		if(i%20==0)LED0=!LED0;
	}
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_FSMC_Init();
  MX_TIM6_Init();
  MX_TIM4_Init();
  MX_TIM2_Init();
  MX_TIM3_Init();
  /* USER CODE BEGIN 2 */
  
	delay_init(72);			//us��ʱ��ʼ��
	LCD_Init();				//��Ļ��ʼ��
	//tp_dev.init();			//��������ʼ��
	KEY_Init();				//������ʼ��
	HAL_TIM_Base_Start_IT(&htim6);		//lvgl������ʱ������
	HAL_TIM_Base_Start_IT(&htim2);		//�ƹ�Ƶ����ʱ������
	lv_init();				//lvgl��ʼ��
	lv_port_disp_init();	//lvgl��ʾ��ʼ��
	lv_port_indev_init();	//lvgl�����ʼ��
	lcddev.dir = 0;
	
	BEEP_Init();	//�������IO��ʼ��

	ui_init();
	
	WS_WriteAll_RGB(255,255,255);		//�ϵ����׵�
	HAL_Delay(500);
	
	//rtp_test();		//��������
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {		
		tp_dev.scan(0);		//����ɨ��
		lv_task_handler();	//lvgl������	
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == htim6.Instance)	//��ʱ��4�ṩLVGLʱ��
	{
		lv_tick_inc(1);		//lvgl����
	}
	
	if(htim->Instance == htim2.Instance)	//��ʱ��2�ṩLEDƵ��
	{			
		if(flash_state == 1)
		{
			LED_RUN();
			flash_state = 0;
		}
		else 
		{
			WS_CloseAll();
			flash_state = 1;
		}

		
	}
	if(htim->Instance == htim3.Instance)	//�ṩ����ʱ����,100ms����һ���ж�
	{
		time_tick ++;
		if(time_tick >= 10)
		{
			time_tick = 0;
			if(Hotwind_state == 1)	//���ȷ翪������ʼ����ʱ
			{
				if(Hotwind_S == 0)
				{
					Hotwind_S = 60;
					Hotwind_M -- ;
				}
				Hotwind_S --;		//δ�����...
				
			}
			
			if(Watermist_state == 1)
			{
				
			}
			
		}
	}
}
	
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
