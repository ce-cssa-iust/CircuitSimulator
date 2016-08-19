#ifndef __VCC_H__
#define __VCC_H__


#include "Symbol.h"
#include "Pin/PinOut.h"


namespace CS
{

    class Vcc: public Symbol
    {
    private:
        PinOut *mOutput;

    public:
        Vcc();
        ~Vcc();

        void fire() override;
    };

} // namespace CS

#endif // __VCC_H__
