#include <iostream>
using namespace std;

int small(int*);

int main()
{
	int arr[] = { 1,2,4,5,10,100,2,-22 };
	cout << "The smallest number of the array is: " << small(arr) << endl;
	return 0;
}

int small(int* ary)
{
	int largest=0;	//I search for the largest first so that I don't ever use an initializer that's too small
	for (int i = 0; i < 8; i++)
		if (ary[i] > largest)
			largest = ary[i];
	int smlst = largest;
	for (int i = 0; i < 8; i++)
		if (ary[i] < smlst)
			smlst = ary[i];
	return smlst;
}
