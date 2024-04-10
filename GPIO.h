#ifndef GPIO_H

#define RCC_BASE 0x40021000
#define RCC_APB2ENR *((volatile unsigned int*)(RCC_BASE + 0x18))

#define GPIOA_BASE 0x40010800 
#define GPIOA_CRH *((volatile unsigned int*)(GPIOA_BASE + 0x04))

#define GPIO_H
#endif
