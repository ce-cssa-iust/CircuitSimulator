#ifndef __PININ_H__
#define __PININ_H__


#include "Utils/Types.h"
#include "Utils/FixedQueue.h"
#include "PinOut.h"


namespace CS
{

	class PinIn
	{
	private:
		const PinOut *mInputSignal;
        FixedQueue<ESignalType> mLastSignals;

	public:
        PinIn(unsigned int delay);
		~PinIn();

		ESignalType getSignal() const;
        ESignalType getDelayedSignal() const;
        void updateLastSignal();
	};

} // namespace CS

#endif // __PININ_H__
