#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T>
void shuffle(vector<T> &v);

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

template <typename T>
void shuffle(vector<T> &v)
{
	int n = v.size();
	if (n > 1)
	{
		srand(time(NULL));
		for (T i = 0; i < n - 1; i++)
		{
			T j = i + rand() / (RAND_MAX / (n - i) + 1);
			int t = v[j];
			v[j] = v[i];
			v[i] = t;
		}
	}
}