	
#ifndef __HW_STM32F051R8_H__
#define __HW_STM32F051R8_H__


#define write_reg(addr, value)    *((unsigned long int *)(addr)) = value
#define read_reg(addr, mask)      *((unsigned long int *)(addr)) & (mask)

#define RCC_ADD			0x40021000u		
#define RCC_AHBENR			(RCC_ADD +0x14u )


/*````````````````````````````````````````*/
#define BASE_ADDR_GPIO 	0x48000800u
#define GPIOC_MODER 		(BASE_ADDR_GPIO + 0x00u)
#define GPIO_MODER_INPUT 	0x00u
#define GPIO_MODER_OUTPUT 	0x01u
#define GPIO_MODER_ALT 	0x02u
#define GPIO_BSRR		(BASE_ADDR_GPIO + 0x18u)
/*````````````````````````````````````````````````````````*/


/* LED LD3 PC9*/
#define LD3_PIN		9

/*LED LD4 PC8*/
#define LD4_PIN 		8


/* end file */
#endif /* __HW_STM32F051R8_H__*/

