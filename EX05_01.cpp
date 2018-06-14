#include <iostream>
using namespace std;
template<typename T>
 T linearSearch(const T list[], T key, T arraySize);

// 16/20

int main()
{
	int list[] = { 1,4,4,2,5,-3,6,2 };
	int i = linearSearch(list, 4, 8);
	int j = linearSearch(list, -4, 8);
	int k = linearSearch(list, -3, 8);
	return i;
}

//PT -- the number of items in an array will always be an int, and this function
//      will always return the location of the item, which will always be an int.
//      The way you've written this, it will only work with int types since you have
//      arraySize as a T type.
//      The signature should be int linearSearch(const T list[], T key, int arraySize)
// -4

template<typename T>
	T linearSearch(const T list[], T key, T arraySize)
	{
		for (int i = 0; i < arraySize; i++)
		{
			if (key == list[i])
				return i;
		}
		return -1;
	}
