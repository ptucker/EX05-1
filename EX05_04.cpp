#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void shuffle(vector<T> &v);

// 17/20

int main()
{
	int size = 10;
	vector<int> intvec;
	for (int i = 0; i < size; i++)
		intvec.push_back(i + 1);
	shuffle(intvec);
	for (int i = 0; i < size; i++)
		cout<<intvec[i]<<endl;
	return 0;
}

//PT -- this works, but could you imagine an algorithm that matches how cards are actually sorted
//      that is, cut the deck somewhat in half, then merge the two "halves"?

template <typename T>
void shuffle(vector<T> &v)
{
	int n = v.size();
	if (n > 1)
	{
		srand(time(NULL));
		//PT -- should be int i, since an index in an array is always an int.
		// -1 
		for (T i = 0; i < n - 1; i++)
		{
			//PT -- should be int j
			// It's not clear to me what j is in this case. A comment would help.
			// I would expect int j = rand() % n;
			//  -1
			T j = i + rand() / (RAND_MAX / (n - i) + 1);
			//PT -- should be T t = v[j], since you're getting a T-type thing out of v.
			// -1
			int t = v[j];
			v[j] = v[i];
			v[i] = t;
		}
	}
}
