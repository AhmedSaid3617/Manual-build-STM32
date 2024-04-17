#include "GPIO.h"

const int arr[5] = {};

int main()
{
    RCC_APB2ENR |= (1 << 4);
    // Enable clock for GPIOC                           

    GPIOC_CRH |= (1 << 21);
    GPIOC_CRH &= ~(0xD << 20);

    while (1)
    {
        for (int i = 0; i < 100000; i++);
        GPIOC_ODR |= (1<<13);

        for (int i = 0; i < 100000; i++);
        GPIOC_ODR &= ~(1<<13);
    }

    return 0;
}