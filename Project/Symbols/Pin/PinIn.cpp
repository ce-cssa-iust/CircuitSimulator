#include "PinIn.h"

using namespace std;
using namespace CS;


PinIn::PinIn(unsigned int delay)
{
    mLastSignals = FixedQueue<ESignalType> (delay, SX);
}

PinIn::~PinIn()
{
}


ESignalType PinIn::getSignal() const
{
    return mInputSignal->getSignal();
}

ESignalType PinIn::getDelayedSignal() const
{
    return mLastSignals.front();
}

void PinIn::updateLastSignal()
{
    mLastSignals.push(mInputSignal->getSignal());
}
