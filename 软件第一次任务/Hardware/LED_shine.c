#include "stm32f10x.h"                  // Device header
#include "LED.h"
void LED_shine(uint8_t Num){
	switch(Num){
		case 0:
		LED1_OFF();
		LED2_OFF();
		LED3_OFF();
		break;
		case 1:
		LED1_ON();
		LED2_OFF();
		LED3_OFF();
		break;
	    case 2:
		LED1_OFF();
		LED2_ON();
		LED3_OFF();
		break;
	    case 3:
		LED1_ON();
		LED2_ON();
		LED3_OFF();
		break;
	    case 4:
		LED1_OFF();
		LED2_OFF();
		LED3_ON();
		break;
	    case 5:
		LED1_ON();
		LED2_OFF();
		LED3_ON();
		break;
	    case 6:
		LED1_OFF();
		LED2_ON();
		LED3_ON();
		break;
	    case 7:
		LED1_ON();
		LED2_ON();
		LED3_ON();
		break;
	}
}
