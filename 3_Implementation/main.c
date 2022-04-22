c
#ifndef _SWITCH_H_
#define _SWITCH_H_

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>


void switch_on();
void switch_off();
void peripheral_init(void)
{
  DDRB |= (1 << DDB2)|(1<<DDB3); //to initialize the ports B2 and B3
  DDRB &= ~(1 << DDB0); //to initialize the switch to port B0
  //intialization of ports
}

void switch_off()
{
       PORTB &= (~(1<<PINB2))&(~(1<<PINB3)); // when switch is off led lights go off

}

void switch_on()
{
    PORTB |=(1<<PORTB2);
    PORTB &=~(1<<PORTB3);
    _delay_ms(2000);
    
    PORTB &=~(1<<PORTB2);
    _delay_ms(4000);
    PORTB |=(1<<PORTB3);
    _delay_ms(2000);

}
int main(void)
{
  
  peripheral_init(); //to intialise port
  while (1)
  {
    
    if (!(PINB&(1<<PINB0)))
    {
      
      switch_on(); //if switch is on
    }
    else
    {
      switch_off(); //if switch is off
    }

  }
}
#endif
