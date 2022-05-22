
  

#include "hw_stm32f051R8.h"

void delay(unsigned int timeout)
{
    unsigned int t1, t2;
    for (t1 = 0; t1 < timeout; t1++)
    {
        for (t2 = 0; t2 < 0xFFF; t2++)
        {
          asm(" nop");
        }
    }
}

void clock_enalbe(){
	int temp;
	temp = read_reg(RCC_AHBENR, ~(1<<19));
	temp = temp | (1<<19);
	write_reg(RCC_AHBENR, temp);
}

void init_pin(void){
	unsigned int tempreg;
	tempreg = read_reg(GPIOC_MODER, ~(0x03 << 18));
	/* set mode led ld3 */
	tempreg = tempreg | (GPIOC_MODER , GPIO_MODER_OUTPUT << 18);
	write_reg(GPIOC_MODER , tempreg);
	
}


void led_on(unsigned char pin_number){
	write_reg(GPIO_BSRR, 1 << pin_number);
}

void led_off(unsigned char pin_number){
	write_reg(GPIO_BSRR, 1 << (pin_number+16));
}

void main(void)
{	clock_enalbe();
	init_pin();
 	 while(1){
  		led_on(LD3_PIN);
  		delay(0xf);
  		led_off(LD3_PIN);
  		delay(0xf);
  	}
}

/*````````````````````````````````````````````````````````````````*/
void Reserved_IRQHandler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void NMI_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void HardFault_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void SVC_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void PendSV_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}

void SysTick_Handler(void)
{
  while(1)
  {
    /* nothing to be run here */
  }
}



