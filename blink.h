#ifndef __NB_BLINK
#define __NB_BLINK

#include "nworkbench.h"

class nBlock_Blink: public nBlockSimpleNode<1> {
public:
    nBlock_Blink(uint32_t period_ms, PinName pinOut);
private:
    Ticker _blink;
    void _tick(void);
    DigitalOut _out;
};

#endif

