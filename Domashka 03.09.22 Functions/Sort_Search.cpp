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
	cout << endl << "Значение\t\tКоличество повторений" << endl << endl;
	int count;
	int buffer;
	bool help;
	cout << endl << endl << "Значение" << "\t" << "Количество повторений" << endl << endl;
	for (int i = 0; i < size; i++)
	{
		help = 1;
		count = 0;
		buffer = arr[i];
		for (int k = i - 1;k >= 0;k--)
		{
			if (i == 0) break;
			if (arr[k] == buffer) help = 0;
		}
		if (help == 0) continue;
		else for (int j = 0;j < 10;j++)
		{
			if (buffer == arr[j]) count++;
		}
		if (count > 1) cout << buffer << "\t\t" << --count << endl;
	}
}