#ifndef VECTOR_H_
#define VECTOR_H_

template <typename T>
class vector
{
private:
	int size;
	T *elements;
	int capacity;
	void ensureCapacity();
public:
	vector();
	vector(int);
	vector(int, T);
	void push_back(T);
	void pop_back();
	const int getSize();
	const T at(int);
	const bool empty();
	void clear();
	void swap(vector);
	void doubleCapacity();	//used for the swap in case one vector is larger than the other
};
#endif