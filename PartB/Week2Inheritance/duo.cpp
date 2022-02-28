
template <class T>

class duo {
public:
	duo() :first(0.0), second(0.0) {}
	duo(T x,T y) :first(x), second(y) {}

	void set_first(T d) { first = d; }
	void set_second(T d) { second = d; }

	T get_first() { return first; }
	T get_second() { return second; }

protected:
	T first, second;
};