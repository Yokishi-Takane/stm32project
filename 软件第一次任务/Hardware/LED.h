#ifndef __LED_H
#define __LED_H

void LED_Init(void);//初始化LED
void LED1_ON(void);//开启LED
void LED1_OFF(void);//关闭LED
void LED2_ON(void);
void LED2_OFF(void);
void LED3_ON(void);
void LED3_OFF(void);
void LED1_Turn(void);//读取端口输出状态，实现端口状态取反
void LED2_Turn(void);
void LED3_Turn(void);
#endif