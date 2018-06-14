#include "Vector.h"
#include <iostream>
using namespace std;

// 20/20

template <typename T>
vector<T>::vector()
{
	capacity=10;
	T *elements = new T[capacity];
	size = 0;
}

template <typename T>
vector<T>::vector(int capacity)
{
	(*this).capacity = capacity;
	T *elements = new T[capacity];
	size = 0;
}

template <typename T>
vector<T>::vector(int size, T element)
{
	(*this).capacity = capacity;
	T *elements = new T[capacity];
	for (int i = 0; i < capacity; i++)
		elements[i] = element;
	size = capacity;
}

template <typename T>
void vector<T>::push_back(T element)
{
	ensureCapacity();
	size++;
	elements[size] = element;
}

template <typename T>
void vector<T>::pop_back()
{
	size--;
}

template <typename T>
const int vector<T>::getSize()
{
	return size;
}

template <typename T>
const T vector<T>::at(int here)
{
	return (elements[here]);
}

template <typename T>
const bool vector<T>::empty()
{
	if (size <= 0)
		return false;
	else
		return true;
}

template <typename T>
void vector<T>::clear()
{
	size = 0;
}

//PT -- probably should pass by reference here
template <typename T>
void vector<T>::swap(vector otherEle)
{
	T temp;
	for (int j = 0; j != 1;)	//to ensure that swap is successful
	{
		if (capacity > otherEle.capacity)
			otherEle.doubleCapacity();
		else if (capacity < otherEle.capacity)
			doubleCapacity();
		else
			j = 1;
	}
	for (int i = 0; i < size; i++)
	{

		temp = elements[i];
		elements[i] = otherEle[i];
		otherEle[i] = temp;
	}
}

template <typename T>
void vector<T>::ensureCapacity()	//doubles capacity each time the array size attempts to exceed it's cap.
{
	if (size >= capacity)
	{
		//PT -- Why not just call doubleCapacity here?
		T* old = elements;
		capacity = 2 * size;
		elements = new T[size * 2];
		for (int i = 0; i < size; i++)
			elements[i] = old[i];
		delete[] old;
	}
}

template <typename T>
void vector<T>::doubleCapacity()	//doubles the capacity even if there is more room
{
	T* old = elements;
	capacity = 2 * size;
	elements = new T[size * 2];
	for (int i = 0; i < size; i++)
		elements[i] = old[i];
	delete[] old;
}
