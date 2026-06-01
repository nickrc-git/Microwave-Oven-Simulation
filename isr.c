
#include <xc.h>
#include "timers.h"

unsigned int count;
extern unsigned char sec, min;
extern unsigned char pre_heat_time;

void __interrupt() isr(void)
{
    if (TMR2IF)
    {
        if (++count == 20000) 
        {
            count = 0;
            if (sec != 0)
            {
                sec--;
            }
            else if (sec == 0 && min != 0)
            {
                min--;
                sec = 59;
            }
            else if (pre_heat_time != 0)
            {
                pre_heat_time--;
            }
        }
        
        TMR2IF = 0; 
    
    }
}