#ifndef __GROUND_H__
#define __GROUND_H__


#include "Symbol.h"
#include "Pin/PinOut.h"


namespace CS
{

    class Ground: public Symbol
    {
    private:
        PinOut *mOutput;

    public:
        Ground();
        ~Ground();

        void fire() override;
    };

} // namespace CS

#endif // __GROUND_H__
