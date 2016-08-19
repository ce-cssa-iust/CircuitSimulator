#include "D_FF.h"

using namespace CS;


D_FF::D_FF(unsigned int setupTime, unsigned int holdTime):
        FlipFlop(setupTime, holdTime)
{
    mD = new PinIn(mSetupTime);
}

D_FF::~D_FF()
{
    delete mD;
}


void D_FF::fire()
{
    if (!clockChanged()) return;
}
