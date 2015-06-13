/*
 * Sh_Ctrl.cpp
 *
 * Created: 17.04.2015 19:47:08
 *  Author: Kristina
 */ 


#include <avr/io.h>
#include <avr/delay.h>
#include "Port.h"
#include "PortPin.h"

int main(void)
{
	Port b;
	PortPin a;
	PortPin c;
	PortPin d;

	d.setDir(PortPin::DIGITAL_OUT);


	while(1)
    {
      d.set();
      _delay_ms(2000);
      d.reset();
      
    }

}
