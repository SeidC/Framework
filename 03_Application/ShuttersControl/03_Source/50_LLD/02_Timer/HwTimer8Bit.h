/* 
* HwTimer8Bit.h
*
* Created: 28.04.2015 22:26:21
* Author: AP-LENOVO
*/


#ifndef __HWTIMER8BIT_H__
#define __HWTIMER8BIT_H__

#include "HwTimer.h"

class HwTimer8Bit : public HwTimer<Timer8_t>
{
//variables
public:
    enum Timer_t
    {
        TIMER_0     = 0x00,     
        TIMER_2           ,
    };
    
protected:
private:

//functions
public:
	HwTimer8Bit();
    HwTimer8Bit(Timer_t timer);
	~HwTimer8Bit();

protected:

private:
	HwTimer8Bit( const HwTimer8Bit &c );
	HwTimer8Bit& operator=( const HwTimer8Bit &c );

}; //HwTimer8Bit

#endif //__HWTIMER8BIT_H__
