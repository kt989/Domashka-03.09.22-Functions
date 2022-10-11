#include "Sort_Search.h"

template<typename T> void Sort_up(T arr[], int size)
{
	T buffer;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}

}

template<typename T> void Sort_down(T arr[], int size)
{
	T buffer;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}

}


template<typename T> void Search(T arr[], int size)
{
	int count;
	cout << endl << "Значение\t\tКоличество повторений" << endl << endl;
	for (int i = 0;i < size;i++)
	{
		count = 1;
		for (int j = 0; j < size;j++)
		{
			if (i == j) continue;
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		for (int j = 0;j <= i;j++)
		{
			if (i == j) continue;
			if (arr[i] != arr[j]) continue;
			else if (count > 1)
			{
				cout << arr[i] << "\t\t\t" << count << endl << endl;

			}
		}


	}
}