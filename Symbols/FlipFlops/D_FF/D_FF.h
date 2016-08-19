#ifndef __DFF_H__
#define __AND_H__


#include "FlipFlops/FlipFlop.h"
#include "Pin/PinIn.h"


namespace CS
{

    class D_FF: public FlipFlop
    {
    private:
        PinIn *mD;

	public:
        D_FF(unsigned int setupTime, unsigned int holdTime);
        ~D_FF();

        void fire() override;
	};

} // namespace CS

#endif // __DFF_H__
