#ifndef __PINOUT_H__
#define __PINOUT_H__


#include "Utils/Types.h"
#include "Utils/FixedQueue.h"


namespace CS
{

	class PinOut
	{
    private:
		ESignalType mSignal;
        FixedQueue<ESignalType> mFutureSignals;

	public:
        PinOut(ESignalType signal, unsigned int delay=1);
		~PinOut();

		ESignalType getSignal() const;
        void addNewSignal(ESignalType signal);
		void updateSignal();
	};

} // namespace CS

#endif // __PINOUT_H__
