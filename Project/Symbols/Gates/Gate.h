#ifndef __GATE_H__
#define __GATE_H__


#include "Symbol.h"
#include "Pin/PinIn.h"
#include "Pin/PinOut.h"
#include "Utils/Array.h"


namespace CS
{

    /// abstract class
    class Gate: public Symbol
	{
	protected:
		const unsigned int mDelay;
        Array<PinIn*> mInputs;
		PinOut *mOutput;

    protected:
        Gate(size_t inputSize, unsigned int delay);
		~Gate();
	};

} // namespace CS

#endif // __GATE_H__
