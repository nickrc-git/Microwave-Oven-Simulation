#include <xc.h>
#include "timers.h"

void init_timer2(void)
{
    TOUTPS3 = 0;
    TOUTPS2 = 0;
    TOUTPS1 = 0;
    TOUTPS0 = 0;
    
    TMR2ON = 1;
    
    T2CKPS1 = 0;
    T2CKPS0 = 0;
    
    TMR2IE = 1;
    
    TMR2IF = 0;
    
    PR2 = 250;
}