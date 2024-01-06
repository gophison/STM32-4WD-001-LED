#include "timer.h"
#include "dianji.h"

//ͨ�ö�ʱ���жϳ�ʼ��
//����ʱ��ѡ��ΪAPB2 72Mhz����APB1Ϊ36M
//arr���Զ���װֵ��
//psc��ʱ��Ԥ��Ƶ��
//����ʹ�õ��Ƕ�ʱ��1 ,��ʱʱ��t=arr*(psc*1/APB2(72Mhz))

int plase=0;
int xa=0;
int xb=0;
int xc=0;


void Timerx_Init(u16 arr,u16 psc)
{   
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;

	TIM_DeInit(TIM1);  
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE); //TIM1ʱ��ʹ��

	TIM_TimeBaseStructure.TIM_Period = arr; //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 ������5000Ϊ500ms
	TIM_TimeBaseStructure.TIM_Prescaler =(psc-1); //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  10Khz�ļ���Ƶ��  
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM1, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ
 
	TIM_ITConfig(        //ʹ�ܻ���ʧ��ָ����TIM1�ж�
		TIM1,              //TIM1
		TIM_IT_Update  |   //TIM1 �ж�Դ
		TIM_IT_Trigger,    //TIM1 �����ж�Դ 
		ENABLE             //ʹ��
		);
	TIM_Cmd(TIM1, ENABLE);  //ʹ��TIMx����
	/* Configure the NVIC Preemption Priority Bits */  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_0);            //�ж���0
	NVIC_InitStructure.NVIC_IRQChannel = TIM1_UP_IRQn;         //TIM1�ж�  
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 3;  //��ռ���ȼ�3��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;         //�����ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;            //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);                            //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ���							 
}

void TIM1_UP_IRQHandler(void)   //TIM1�ж�
{
	if (TIM_GetITStatus(TIM1, TIM_IT_Update) != RESET) //���ָ����TIM1�жϷ������:TIM1 �ж�Դ 
	{
		TIM_ClearITPendingBit(TIM1, TIM_IT_Update);  //���TIMx���жϴ�����λ:TIM1 �ж�Դ 
		
		plase++;                          //PWMֵ����
		if(plase<500)
		{					
			dianjioutput(plase);				    //�����������
		}
		else if(plase>500)
		{ 
			plase=-plase;                   //��ת���PWMֵ
			dianjioutput(plase);            //�����������
		}
		else if(plase>1000)
		{
			plase=0;                        //PWMֵ����
		}		
	}
}