#ifndef __CS_ARRAY_H__
#define __CS_ARRAY_H__


#include <cstdlib>


namespace CS
{

	template <typename T>
	class Array
	{
	private:
		T *_arr;
        size_t _size;

	public:
		Array()
		{
		}

		Array(size_t size): _size(size)
		{
			_arr = new T[_size];
		}

		~Array()
		{
			delete[] _arr;
		}

		void operator= (const Array<T> &x)
		{
			_size = x._size;
			_arr = x._arr;
		}

		T &operator[] (size_t index)
		{
			return _arr[index];
		}

		const T &operator[] (size_t index) const
		{
			return _arr[index];
		}

        size_t size() const
		{
			return _size;
		}

	};

} // namespace CS

#endif // __CS_ARRAY_H__
