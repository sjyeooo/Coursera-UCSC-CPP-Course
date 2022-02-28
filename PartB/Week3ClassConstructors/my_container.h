#ifndef MY_CONTAINER_H
#define MY_CONTAINER_H

template <class T>
class my_container {
public:
	my_container(int n) { a = new T[n]; }

	~my_container() { delete[] a; }

	//Conversion constructor
	//explicit turns off automatic type conversion
	explicit my_container(T* b, int n)
		:my_container()	//Delegate construction
	{
		for (int i = 0; i < n; i++)
			a[i] = b[i];
	};

	//Copy constructor - b copied over
	my_container(const my_container& b, int n)
		:my_container() //Delegate construction
	{
		for (int i = 0; i < n; i++)
		{
			this->a[i] = b.a[i];
		}
	}

	//Move constructor
	//&& - right side reference (rvalue reference)
	my_container(my_container&& b)noexcept	//noexceptions to be thrown
	{
		//Shallow copying
		a = b.a;		//a now points at what b points at.
		b.a = nullptr;	//Deference the b
	}

	//Non-copying move assignment
	//Associated assignment
	my_container& operator=(my_container&& b)noexcept
	{
		a = b.a;
		b.a = nullptr;
		return *this;
	}
	
	// Efficient swap O(1)
	void swap(my_container& b)
	{
		// std::move() is using static_cast<T&&>(t) - destructive assignment
		my_container temp = std::move(b);	//= uses the move constructor
		b = std::move(*this);
		*this = std::move(temp);
	}

private:
	T* a;
};


#endif // !MY_CONTAINER_H
