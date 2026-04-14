#include <stdint.h>
#include "stm32f103x6.h"
#include "gpio.h"

void GPIO_Init(void){
	RCC->APB2ENR |= RCC_APB2ENR_IOPCEN; // CLOCK ENABLE FOR GPIO C

	GPIOC->CRH = (GPIOC->CRH & ~(GPIO_CRH_MODE13_Msk | GPIO_CRH_CNF13_Msk)) | (GPIO_CRH_MODE13_0); // OUTPUT 10 MHZ PUSH PULL
}

void LED_ON(void){
	GPIOC->BRR = GPIO_BRR_BR13;
}

void LED_OFF(void){
	GPIOC->BSRR = GPIO_BSRR_BS13;
}

void LED_Toggle(void){
	GPIOC->ODR ^= GPIO_ODR_ODR13;
}

