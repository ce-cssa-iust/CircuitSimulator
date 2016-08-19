#include "Vcc.h"

#include "Utils/Types.h"

using namespace CS;


Vcc::Vcc()
{
    mOutput = new PinOut(S1);
}

Vcc::~Vcc()
{
    delete mOutput;
}


void Vcc::fire()
{
}

