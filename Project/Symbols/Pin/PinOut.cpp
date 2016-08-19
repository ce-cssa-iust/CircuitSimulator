#include "PinOut.h"

using namespace std;
using namespace CS;


PinOut::PinOut(ESignalType signal, unsigned int delay)
{
    mFutureSignals = FixedQueue<ESignalType> (delay, SX);
	mSignal = signal;
}

PinOut::~PinOut()
{
}


ESignalType PinOut::getSignal() const
{
	return mSignal;
}

void PinOut::addNewSignal(ESignalType signal)
{
    mFutureSignals.push(signal);
}

void PinOut::updateSignal()
{
    mSignal = mFutureSignals.front();
}
