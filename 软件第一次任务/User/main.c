#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "KEY.h"

uint8_t KeyNum;
uint8_t Mode = 0;
uint8_t Num = 0;
int main(void)
{
	LED_Init();
	Key_Init();
	
	while (1){
		
	    KeyNum = Key_GetNum();
		
		if(KeyNum == 1){
			if(Mode == 0){
			Num++;
			if(Num > 7){
			Num = 0;
			}
			LED_shine(Num);
			}
		}
		if(KeyNum == 2){
		if(Mode == 0){
			Mode = 1;
			}else{
			Mode = 0;
			}
		if(Mode == 1){
			uint8_t j = 0;
			uint8_t i = 0;
			uint8_t interrupted = 0;
			for(                ;i<50;i++){
			Delay_ms(10);
			KeyNum = Key_GetNum();
			if(KeyNum == 2){	
			Mode = 0;
			interrupted = 1;
			break;}
	     }
			if(interrupted == 1){
			break;}
	    if(interrupted == 0){
		   for(i=0;interrupted == 0;i++) {
	          KeyNum = Key_GetNum();
			  if(KeyNum == 2){	
			  Mode = 0;
			  interrupted = 1;
			  break;}
			  Delay_ms(500);
			  Num++;
	          if (Num>7){
	          Num = 0;}
	          LED_shine(Num); 
			  }
		   }
		 }
	 }
		}
	Delay_ms(10);}

