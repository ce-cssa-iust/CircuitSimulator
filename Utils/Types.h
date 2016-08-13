#ifndef __TYPES_H__
#define __TYPES_H__


namespace CS
{

	enum ESignalType
	{
		S0,
		S1,
		SX
	};

	enum class EInputCategory
	{
		Data,
		Address,
        Control,
        Clock
	};

} // namespace CS

#endif // __TYPES_H__
