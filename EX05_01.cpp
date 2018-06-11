#include <iostream>
using namespace std;
template<typename T>
 T linearSearch(const T list[], T key, T arraySize);

int main()
{
	int list[] = { 1,4,4,2,5,-3,6,2 };
	int i = linearSearch(list, 4, 8);
	int j = linearSearch(list, -4, 8);
	int k = linearSearch(list, -3, 8);
	return i;
}

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