/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         bsp_gpio.c
* @author       liusen
* @version      V1.0
* @date         2015.01.03
* @brief        ����gpioԴ�ļ�
* @details      
* @par History  ������˵��
*                 
* version:	liusen_20170717
*/

#include "stm32f10x.h"
#include "stm32f10x_pwr.h"
#include "stm32f10x_bkp.h"
#include "bsp_gpio.h"
#include "bsp_motor.h"
#include "bsp_servo.h"
#include "bsp_colorful.h"




/**
* Function       MOTOR_GPIO_Config
* @author        liusen
* @date          2015.01.03    
* @brief         ���GPIO�ڳ�ʼ��
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   ��
*/

void MOTOR_GPIO_Init(void)
{		
	/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
	GPIO_InitTypeDef GPIO_InitStructure;

	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Motor_RCC, ENABLE); 

	/*ѡ��Ҫ���Ƶ�GPIOB����*/															   
  	GPIO_InitStructure.GPIO_Pin = Left_MotoA_Pin | Left_MotoB_Pin | Right_MotoA_Pin | Right_MotoB_Pin;	

	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

	/*���ÿ⺯������ʼ��GPIOB*/
  	GPIO_Init(Motor_Port, &GPIO_InitStructure);		  

	/* �͵�ƽ	*/
	GPIO_ResetBits(Motor_Port, Left_MotoA_Pin | Left_MotoB_Pin | Right_MotoA_Pin | Right_MotoB_Pin);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB  | RCC_APB2Periph_AFIO, ENABLE);  //ʹ��GPIO�����AFIO���ù���ģ��ʱ��
	GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);  //����jtag
 
}

/**
* Function       Servo_GPIO_Init
* @author        liusen
* @date          2015.01.03    
* @brief         ��Ҫ�õ��Ķ����ʼ���ӿ�
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   ��
*/

void Servo_GPIO_Init(void)
{		
	/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
	GPIO_InitTypeDef GPIO_InitStructure;

	PWR_BackupAccessCmd(ENABLE);//�����޸�RTC �ͺ󱸼Ĵ���
	RCC_LSEConfig(RCC_LSE_OFF);//�ر��ⲿ�����ⲿʱ���źŹ��� ��PC13 PC14 PC15 �ſ��Ե���ͨIO�á�
	BKP_TamperPinCmd(DISABLE);//�ر����ּ�⹦�ܣ�Ҳ���� PC13��Ҳ���Ե���ͨIO ʹ��
	PWR_BackupAccessCmd(DISABLE);//��ֹ�޸ĺ󱸼Ĵ���

#ifdef USE_SERVO_J1
	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Servo_J1_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Servo_J1_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz; 
	/*���ÿ⺯������ʼ��Servo_J1_PORT*/
  	GPIO_Init(Servo_J1_PORT, &GPIO_InitStructure);		  
#endif

#ifdef USE_SERVO_J2
	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Servo_J2_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Servo_J2_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz; 
	/*���ÿ⺯������ʼ��Servo_J2_PORT*/
  	GPIO_Init(Servo_J2_PORT, &GPIO_InitStructure);		  
#endif

#ifdef USE_SERVO_J3
	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Servo_J3_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Servo_J3_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz; 
	/*���ÿ⺯������ʼ��Servo_J3_PORT*/
  	GPIO_Init(Servo_J3_PORT, &GPIO_InitStructure);		  
#endif

#ifdef USE_SERVO_J4
	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Servo_J4_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Servo_J4_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	/*���ÿ⺯������ʼ��Servo_J4_PORT*/
  	GPIO_Init(Servo_J4_PORT, &GPIO_InitStructure);		  
#endif

#ifdef USE_SERVO_J5
	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Servo_J5_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Servo_J5_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	/*���ÿ⺯������ʼ��Servo_J5_PORT*/
  	GPIO_Init(Servo_J5_PORT, &GPIO_InitStructure);		  
#endif

#ifdef USE_SERVO_J6
	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Servo_J6_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Servo_J6_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	/*���ÿ⺯������ʼ��Servo_J1_PORT*/
  	GPIO_Init(Servo_J6_PORT, &GPIO_InitStructure);		  
#endif
 
}

/**
* Function       Colorful_GPIO_Init
* @author        liusen
* @date          2015.01.03    
* @brief         �߲�̽�յ�GPIO��ʼ���ӿ�
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   ��
*/
void Colorful_GPIO_Init(void)
{
	/*����һ��GPIO_InitTypeDef���͵Ľṹ��*/
	GPIO_InitTypeDef GPIO_InitStructure;

	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Colorful_Red_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Colorful_Red_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	/*���ÿ⺯������ʼ��PORT*/
  	GPIO_Init(Colorful_Red_PORT, &GPIO_InitStructure);		  

	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Colorful_Green_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Colorful_Green_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	/*���ÿ⺯������ʼ��PORT*/
  	GPIO_Init(Colorful_Green_PORT, &GPIO_InitStructure);		  

	/*��������ʱ��*/
	RCC_APB2PeriphClockCmd(Colorful_Blue_RCC, ENABLE); 
	/*ѡ��Ҫ���Ƶ�����*/															   
  	GPIO_InitStructure.GPIO_Pin = Colorful_Blue_PIN;	
	/*��������ģʽΪͨ���������*/
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   
	/*������������Ϊ50MHz */   
  	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 
	/*���ÿ⺯������ʼ��PORT*/
  	GPIO_Init(Colorful_Blue_PORT, &GPIO_InitStructure);		  
}










