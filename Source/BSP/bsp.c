/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         bsp.c
* @author       liusen
* @version      V1.0
* @date         2015.01.03
* @brief        ���������
* @details      
* @par History  ������˵��
*                 
* version:	liusen_20170717
*/


#include "bsp.h"

/**
* Function       bsp_init
* @author        liusen
* @date          2015.01.03    
* @brief         Ӳ���豸��ʼ��
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   ��
*/
void bsp_init(void)
{
	delay_init();
	
	Colorful_GPIO_Init();				/*�߲�̽�յ�*/
	//MOTOR_GPIO_Init();  				/*���GPIO��ʼ��*/
	//Motor_PWM_Init(7200,0, 7200, 0);	/*����Ƶ��PWMƵ�� 72000000/7200=10khz	  */
	//Servo_GPIO_Init();	
	//TIM1_Int_Init(9, 72);				/*100Khz�ļ���Ƶ�ʣ�������10Ϊ10us  */ 
}
