#include "UniqueRand.h"


template<typename T> void UniqueRand(T arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j) continue;
			else if (arr[i] == arr[j])  arr[j] = rand() % 100;
		}
	}

	cout << endl;
	for (int i = 0;i < size;i++) cout << arr[i] << "\t";
	cout << endl << endl;
}