#ifndef __CS_FIXEDQUEUE_H__
#define __CS_FIXEDQUEUE_H__


#include <cstdlib>
#include <queue>


namespace CS
{

	template <typename T>
	class FixedQueue
	{
	private:
        std::queue<T> _q;
        size_t _maxSize;
        T _defaultValue;

	public:
        FixedQueue()
        {
        }

		FixedQueue(size_t maxSize, const T &defaultValue): 
				_maxSize(maxSize), _defaultValue(defaultValue)
		{
			clear();
		}

		~FixedQueue()
		{
		}

		void operator= (const FixedQueue<T> &x)
		{
			_q = x._q;
			_maxSize = x._maxSize;
			_defaultValue = x._defaultValue;
		}


		void push(const T &x)
		{
            _q.pop();
            _q.push(x);
		}

		const T &front() const
		{
			return _q.front();
		}


		void clear()
		{
            std::queue<T>().swap(_q);
			for (size_t i = 0; i < _maxSize; i++)
                _q.push(_defaultValue);
		}

		size_t size() const
		{
			return _q.size();
		}

	};

} // namespace CS

#endif // __CS_FIXEDQUEUE_H__
