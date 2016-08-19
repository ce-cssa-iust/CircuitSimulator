#ifndef __AND_H__
#define __AND_H__


#include "Gates/Gate.h"


namespace CS
{

	class And: public Gate
    {
	public:
        And(size_t inputSize, unsigned int delay);

        void fire() override;
	};

} // namespace CS

#endif // __AND_H__
