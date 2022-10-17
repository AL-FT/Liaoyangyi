#include "ws2812.h"

//传输一次WS2812的数据格式
typedef struct{
	uint16_t head[3];				//复位
	uint16_t GRB[24*WS2812_NUM];
	uint16_t tail;					//传输完成后为低电平
}ws2812_frame_def;

ws2812_frame_def ws2812_frame = {
	.head[0] = 0,
	.head[1] = 0,
	.head[2] = 0,
	.tail = 0
};

void WS2812_Control(void)
{
	uint16_t i,j;
	for(i=0;i<WS2812_NUM;i++){
		for(j=0;j<8;j++){
			ws2812_frame.GRB[i*24+j]	=(G&(0x80>>j))?BIT1:BIT0;
			ws2812_frame.GRB[i*24+8+j]	=(R&(0x80>>j))?BIT1:BIT0;
			ws2812_frame.GRB[i*24+16+j]	=(B&(0x80>>j))?BIT1:BIT0;
		}
	}
		//函数要求为32位无符号指针，但实际传输时，因为之前定义的为half word，所以还是16bit传输
	HAL_TIM_PWM_Start_DMA(&htim4, TIM_CHANNEL_1, (uint32_t *)&ws2812_frame,FRAME_BYTES);
}