#ifndef __SYMBOL_H__
#define __SYMBOL_H__


namespace CS
{

    /// abstract class
    class Symbol
    {
	public:
        virtual void updateInputs() {}
        virtual void fire() = 0;
        virtual void updateOutputs() {}
	};

} // namespace CS

#endif // __SYMBOL_H__
