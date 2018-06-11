#include <iostream>
using namespace std;

// 18/20

int small(int*);

int main()
{
	int arr[] = { 1,2,4,5,10,100,2,-22 };
	cout << "The smallest number of the array is: " << small(arr) << endl;
	return 0;
}

//PT -- Pass the size of the array too, so that your function can work with arrays of any size
//      and not hard-coded to 8
// -2
int small(int* ary)
{
	//PT -- set smlst to ary[0]. Then you don't need to guess, and you might find one smaller.
	//      also, you only go through the array once.
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
