#include "FlipFlop.h"

#include "Utils/Types.h"

using namespace CS;


FlipFlop::FlipFlop(unsigned int setupTime, unsigned int holdTime):
        mSetupTime(setupTime), mHoldTime(holdTime)
{
    mClock = new PinIn(1);
    mQ = new PinOut(SX);
    mQbar = new PinOut(SX);
}

FlipFlop::~FlipFlop()
{
    delete mClock;
    delete mQ;
    delete mQbar;
}


bool FlipFlop::clockChanged() const
{
    if (mClock->getSignal() == S1 && mClock->getDelayedSignal() == S0)
        return true;
    return false;
}
