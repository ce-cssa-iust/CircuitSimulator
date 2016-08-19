#ifndef __FLIPFLOP_H__
#define __FLIPFLOP_H__


#include "Symbol.h"
#include "Pin/PinIn.h"
#include "Pin/PinOut.h"


namespace CS
{

    /// abstract class
    class FlipFlop: public Symbol
	{
	protected:
        const unsigned int mSetupTime;
        const unsigned int mHoldTime;
        PinIn *mClock;
        PinOut *mQ;
        PinOut *mQbar;

    protected:
        FlipFlop(unsigned int setupTime, unsigned int holdTime);
        ~FlipFlop();

        bool clockChanged() const;
	};

} // namespace CS

#endif // __FLIPFLOP_H__
