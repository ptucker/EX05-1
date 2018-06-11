#include <iostream>
#include <string>
using namespace std;

template<typename T>
bool isSorted(const T list[], int size);

int main()
{
	const int size = 5;
	int intArray[5] = { 1,2,3,4,5 };
	double dubArray[5] = { 2.3,5.8,1.6,9.4,3.6 };
	string strArray[5] = { "What","Okay","Help","Me","Please" };
	cout << "int: " << isSorted(intArray, size) << endl;
	cout << "double: " << isSorted(dubArray, size) << endl;
	cout << "string: " << isSorted(strArray, size)<<endl;

	system("pause");
	return 0;
}

template<typename T>
bool isSorted(const T list[], int size)
{
	int boolean = 0;
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i+1])
			boolean++;
	}
	if (boolean > 0)
		return false;
	else
		return true;
}