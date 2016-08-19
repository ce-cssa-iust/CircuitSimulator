#include "Ground.h"

#include "Utils/Types.h"

using namespace CS;


Ground::Ground()
{
    mOutput = new PinOut(S0);
}

Ground::~Ground()
{
    delete mOutput;
}


void Ground::fire()
{
}

