#include "main.h"
#include "string.h"
#include "stdio.h"

extern TIM_HandleTypeDef htim4;
extern DMA_HandleTypeDef hdma_tim4_ch1;

#define PULSE_1_CODE	(59)			//1码计数个数
#define PULSE_0_CODE	(29)			//0码计数个数
#define PIXEL_NUM		(4)				//LED个数
#define PIXEL_DATA_LEN	(24)


//WS2812结构体数组
typedef struct{
	uint8_t r;
	uint8_t g;
	uint8_t b;
}pixel_t;

pixel_t pixel[PIXEL_NUM];

//DMA传输的数据
uint16_t ws2812_DMA_data[PIXEL_DATA_LEN*2] = {0};

/*************************************函数声明*************************************/
void ws2812_RGB_set(uint8_t R,uint8_t G,uint8_t B,uint8_t pixel_id);
uint8_t ws2812_pixel_data_fill(uint8_t pixel_next,uint16_t *addr);
/**********************************************************************************/

void ws2812_RGB_set(uint8_t R,uint8_t G,uint8_t B,uint8_t pixel_id)
{
	if(pixel_id >=(PIXEL_NUM))
		return;
	pixel[pixel_id].r = R;
	pixel[pixel_id].g = G;
	pixel[pixel_id].b = B;
	return;
}

uint8_t ws2812_pixel_data_fill(uint8_t pixel_next,uint16_t *addr)
{
	if(pixel_next >= PIXEL_NUM)
	{
		return 0;
	}
	for(uint8_t i=0;i<8;i++)
	{
		//填充数组
		addr[i]      = (pixel[pixel_next].g << i )&(0x80)?PULSE_1_CODE:PULSE_0_CODE;
		addr[i + 8]  = (pixel[pixel_next].r << i )&(0x80)?PULSE_1_CODE:PULSE_0_CODE;
		addr[i + 16] = (pixel[pixel_next].b << i )&(0x80)?PULSE_1_CODE:PULSE_0_CODE;
	}
}

void ws2812_example_2(void)
{
    uint8_t static bri1 = 0xFF;
    //memset(ws2812_DMA_data,0x00,96);
    ws2812_RGB_set(bri1, bri1, bri1, 0);
    ws2812_RGB_set(bri1, 0x00, 0x00, 1);
    ws2812_RGB_set(0x00, bri1, 0x00, 2);
    ws2812_RGB_set(0x00, 0x00, bri1, 3);

    HAL_TIM_PWM_Start_DMA(&htim4,TIM_CHANNEL_1,(uint32_t *)ws2812_DMA_data,(48));

    HAL_Delay(100);
}


volatile int cnt = 0;
//TC 回调函数
void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim)
{ 
    cnt++;
    if(cnt == 2)
    {
        ws2812_pixel_data_fill(1,ws2812_DMA_data+24);
    }
    if(cnt == 4)
    {
        ws2812_pixel_data_fill(3,ws2812_DMA_data+24);
    }
    if(cnt == 6)
    {
        memset(ws2812_DMA_data+24,0x00,48);
    }
    if(cnt == 8)
    {
        cnt = 0; 
        HAL_TIM_PWM_Stop_DMA(&htim4,TIM_CHANNEL_1);
        //__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1,0);
        
    }
}
//HC 回调函数
void HAL_TIM_PWM_PulseFinishedHalfCpltCallback(TIM_HandleTypeDef *htim)
{   
    cnt++;
    if(cnt == 1)
    {
        ws2812_pixel_data_fill(0,ws2812_DMA_data);
    }
    
    if(cnt == 3)
    {
        ws2812_pixel_data_fill(2,ws2812_DMA_data);
    }
    
    if(cnt == 5)
    {
        memset(ws2812_DMA_data,0x00,48);
    }
}


