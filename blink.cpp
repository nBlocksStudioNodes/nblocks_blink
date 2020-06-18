#include "blink.h"

// BLINK
nBlock_Blink::nBlock_Blink(uint32_t period_ms, PinName pinOut): _out(pinOut) {
    (this->_blink).attach(callback(this, &nBlock_Blink::_tick), 0.001*period_ms);
}
void nBlock_Blink::_tick(void) {
    _out = !_out;
}

