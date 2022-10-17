#include "ws2812.h"

//����һ��WS2812�����ݸ�ʽ
typedef struct{
	uint16_t head[3];				//��λ
	uint16_t GRB[24*WS2812_NUM];
	uint16_t tail;					//������ɺ�Ϊ�͵�ƽ
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
		//����Ҫ��Ϊ32λ�޷���ָ�룬��ʵ�ʴ���ʱ����Ϊ֮ǰ�����Ϊhalf word�����Ի���16bit����
	HAL_TIM_PWM_Start_DMA(&htim4, TIM_CHANNEL_1, (uint32_t *)&ws2812_frame,FRAME_BYTES);
}