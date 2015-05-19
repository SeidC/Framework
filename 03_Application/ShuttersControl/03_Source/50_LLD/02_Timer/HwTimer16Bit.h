/* 
* HwTimer16Bit.h
*
* Created: 28.04.2015 22:18:43
* Author: AP-LENOVO
*/


#ifndef __HWTIMER16BIT_H__
#define __HWTIMER16BIT_H__

#include "HwTimer.h"

class HwTimer16Bit : public HwTimer<Timer16_t>
{
//variables
public:
    enum Timer_t
    {
        TIMER_1     = 0x00,
        TIMER_3     = 0x03,
        
    };
    
protected:
private:

//functions
public:
	HwTimer16Bit();
    HwTimer16Bit(Timer_t timer);
	~HwTimer16Bit();
protected:
private:
	HwTimer16Bit( const HwTimer16Bit &c );
	HwTimer16Bit& operator=( const HwTimer16Bit &c );

}; //HwTimer16Bit

#endif //__HWTIMER16BIT_H__
