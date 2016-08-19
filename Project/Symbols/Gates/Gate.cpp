#include "Gate.h"

#include "Utils/Types.h"

using namespace CS;


Gate::Gate(size_t inputSize, unsigned int delay): mDelay(delay)
{
    mInputs = Array<PinIn*> (inputSize);
    for (size_t i = 0; i < mInputs.size(); i++)
        mInputs[i] = new PinIn(mDelay);

    mOutput = new PinOut(SX);
}

Gate::~Gate()
{
    for (size_t i = 0; i < mInputs.size(); i++)
        delete mInputs[i];
    delete mOutput;
}
