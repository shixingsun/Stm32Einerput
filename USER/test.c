#include "sys.h"
#include "delay.h" 
#include "usart.h" 
#include "led.h"
#include "beep.h"
#include "exti.h"
//ALIENTEK ̽����STM32F407������ ʵ��5
//�ⲿ�ж�ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾
  
int main(void)
{  
	Stm32_Clock_Init(336,8,2,7);//����ʱ��,168Mhz 
	delay_init(168);		//��ʱ��ʼ�� 
	uart_init(84,115200); 	//���ڳ�ʼ�� 
	LED_Init();		  		//��ʼ����LED���ӵ�Ӳ���ӿ� 
	BEEP_Init();		 	//��ʼ��������IO
	EXTIX_Init();         	//��ʼ���ⲿ�ж����� 
	LED0=0;					//�ȵ������
	while(1)
	{
		printf("OK\r\n");	
		delay_ms(1000);	  
	}
}

















