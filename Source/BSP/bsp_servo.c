/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         bsp_servo.c	
* @author       liusen
* @version      V1.0
* @date         2017.07.17
* @brief        6个舵机控制驱动源文件
* @details      
* @par History  见如下说明
*                 
* version:		liusen_20170717
*/

#include "bsp_servo.h"
#include "delay.h"

int Angle_J1 = 0;
int Angle_J2 = 0;
int Angle_J3 = 0;
int Angle_J4 = 0;
int Angle_J5 = 0;
int Angle_J6 = 0;


/**
* Function       Servo_J1
* @author        liusen
* @date          2017.07.17    
* @brief         舵机1控制函数
* @param[in]     v_iAngle 角度：0~180°
* @param[out]    void
* @retval        void
* @par History   无
*/
void Servo_J1(int v_iAngle)/*定义一个脉冲函数，用来模拟方式产生PWM值*/
{
	int pulsewidth;    						//定义脉宽变量

	pulsewidth = (v_iAngle * 11) + 500;			//将角度转化为500-2480 的脉宽值

	GPIO_SetBits(Servo_J1_PORT, Servo_J1_PIN );		//将舵机接口电平置高
	delay_us(pulsewidth);					//延时脉宽值的微秒数

	GPIO_ResetBits(Servo_J1_PORT, Servo_J1_PIN );	//将舵机接口电平置低
	delay_ms(20 - pulsewidth/1000);			//延时周期内剩余时间
}

/**
* Function       Servo_J2
* @author        liusen
* @date          2017.07.17    
* @brief         舵机2控制函数
* @param[in]     v_iAngle 角度：0~180°
* @param[out]    void
* @retval        void
* @par History   无
*/
void Servo_J2(int v_iAngle)/*定义一个脉冲函数，用来模拟方式产生PWM值*/
{
	int pulsewidth;    						//定义脉宽变量

	pulsewidth = (v_iAngle * 11) + 500;			//将角度转化为500-2480 的脉宽值

	GPIO_SetBits(Servo_J2_PORT, Servo_J2_PIN );		//将舵机接口电平置高
	delay_us(pulsewidth);					//延时脉宽值的微秒数

	GPIO_ResetBits(Servo_J2_PORT, Servo_J2_PIN );	//将舵机接口电平置低
	delay_ms(20 - pulsewidth/1000);			//延时周期内剩余时间
}

/**
* Function       Servo_J3
* @author        liusen
* @date          2017.07.17    
* @brief         舵机3控制函数
* @param[in]     v_iAngle 角度：0~180°
* @param[out]    void
* @retval        void
* @par History   无
*/
void Servo_J3(int v_iAngle)/*定义一个脉冲函数，用来模拟方式产生PWM值*/
{
	int pulsewidth;    						//定义脉宽变量

	pulsewidth = (v_iAngle * 11) + 500;			//将角度转化为500-2480 的脉宽值

	GPIO_SetBits(Servo_J3_PORT, Servo_J3_PIN );		//将舵机接口电平置高
	delay_us(pulsewidth);					//延时脉宽值的微秒数

	GPIO_ResetBits(Servo_J3_PORT, Servo_J3_PIN );	//将舵机接口电平置低
	delay_ms(20 - pulsewidth/1000);			//延时周期内剩余时间
}

/**
* Function       Servo_J4
* @author        liusen
* @date          2017.07.17    
* @brief         舵机4控制函数
* @param[in]     v_iAngle 角度：0~180°
* @param[out]    void
* @retval        void
* @par History   无
*/
void Servo_J4(int v_iAngle)/*定义一个脉冲函数，用来模拟方式产生PWM值*/
{
	int pulsewidth;    						//定义脉宽变量

	pulsewidth = (v_iAngle * 11) + 500;			//将角度转化为500-2480 的脉宽值

	GPIO_SetBits(Servo_J4_PORT, Servo_J4_PIN );		//将舵机接口电平置高
	delay_us(pulsewidth);					//延时脉宽值的微秒数

	GPIO_ResetBits(Servo_J4_PORT, Servo_J4_PIN );	//将舵机接口电平置低
	delay_ms(20 - pulsewidth/1000);			//延时周期内剩余时间
}

/**
* Function       Servo_J5
* @author        liusen
* @date          2017.07.17    
* @brief         舵机5控制函数
* @param[in]     v_iAngle 角度：0~180°
* @param[out]    void
* @retval        void
* @par History   无
*/
void Servo_J5(int v_iAngle)/*定义一个脉冲函数，用来模拟方式产生PWM值*/
{
	int pulsewidth;    						//定义脉宽变量

	pulsewidth = (v_iAngle * 11) + 500;			//将角度转化为500-2480 的脉宽值

	GPIO_SetBits(Servo_J5_PORT, Servo_J5_PIN );		//将舵机接口电平置高
	delay_us(pulsewidth);					//延时脉宽值的微秒数

	GPIO_ResetBits(Servo_J5_PORT, Servo_J5_PIN );	//将舵机接口电平置低
	delay_ms(20 - pulsewidth/1000);			//延时周期内剩余时间
}

/**
* Function       Servo_J6
* @author        liusen
* @date          2017.07.17    
* @brief         舵机5控制函数
* @param[in]     v_iAngle 角度：0~180°
* @param[out]    void
* @retval        void
* @par History   无
*/
void Servo_J6(int v_iAngle)/*定义一个脉冲函数，用来模拟方式产生PWM值*/
{
	int pulsewidth;    						//定义脉宽变量

	pulsewidth = (v_iAngle * 11) + 500;			//将角度转化为500-2480 的脉宽值

	GPIO_SetBits(Servo_J6_PORT, Servo_J6_PIN );		//将舵机接口电平置高
	delay_us(pulsewidth);					//延时脉宽值的微秒数

	GPIO_ResetBits(Servo_J6_PORT, Servo_J6_PIN );	//将舵机接口电平置低
	delay_ms(20 - pulsewidth/1000);			//延时周期内剩余时间
}

/**
* Function       front_detection
* @author        liusen
* @date          2017.07.17    
* @brief         云台舵机向前
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   无
*/
void front_detection()
{
	int i = 0;
  	//此处循环次数减少，为了增加小车遇到障碍物的反应速度
  	for(i=0; i <= 15; i++) 						//产生PWM个数，等效延时以保证能转到响应角度
  	{
    	Servo_J1(90);						//模拟产生PWM
  	}
}

/**
* Function       left_detection
* @author        liusen
* @date          2017.07.17    
* @brief         云台舵机向左
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   无
*/
void left_detection()
{
	int i = 0;
	for(i = 0; i <= 15; i++) 						//产生PWM个数，等效延时以保证能转到响应角度
	{
		Servo_J1(175);					//模拟产生PWM
	}
}

/**
* Function       right_detection
* @author        liusen
* @date          2017.07.17    
* @brief         云台舵机向右
* @param[in]     void
* @param[out]    void
* @retval        void
* @par History   无
*/
void right_detection()
{
	int i = 0;
	for(i = 0; i <= 15; i++) 						//产生PWM个数，等效延时以保证能转到响应角度
	{
		Servo_J1(5);						//模拟产生PWM
	}
}

