/**
* @par Copyright (C): 2010-2019, Shenzhen Yahboom Tech
* @file         main.c	
* @author       liusen
* @version      V1.0
* @date         2017.07.17
* @brief        主函数
* @details      
* @par History  
*                 
* version:		liusen_20170717
*/
#include "stm32f10x.h"
#include "app_motor.h"
#include "bsp.h"
#include "sys.h"




int main(void)
{	
	bsp_init();

	while (1)
	{
		/*报警灯光模拟*/
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(300);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(400);
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(300);
		
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(300);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(400);
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(300);	
		
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(100);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(50);
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(100);
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(100);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(50);
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(100);
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(100);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(50);
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(100);
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(100);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(50);
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(100);

		/*七彩灯*/
		bsp_Colorful_Control(1, 0, 0);
		delay_ms(500);
		bsp_Colorful_Control(0, 1, 0);
		delay_ms(500);
		bsp_Colorful_Control(0, 0, 1);
		delay_ms(500);
		bsp_Colorful_Control(1, 1, 0);
		delay_ms(500);
		bsp_Colorful_Control(1, 0, 1);
		delay_ms(500);
		bsp_Colorful_Control(0, 1, 1);
		delay_ms(500);
		bsp_Colorful_Control(1, 1, 1);
		delay_ms(500);
		bsp_Colorful_Control(0, 0, 0);
		delay_ms(500);
	}
 								    
}
