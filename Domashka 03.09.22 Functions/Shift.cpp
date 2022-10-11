#include "Shift.h"

template<typename T> void shiftRight(T arr[], int size, int step)
{
	T sdvig = 0;
	for (int i = 0;i < step;i++)
	{
		sdvig = arr[size - 1];
		for (int j = size - 1; j > 0; j--)
		{

			arr[j] = arr[j - 1];
		}
		arr[0] = sdvig;
	}
	cout << endl << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << "\t";
	}
	for (int i = 0;i < step;i++)
	{
		sdvig = arr[0];
		for (int j = 0; j < size - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = sdvig;
	}

}

template<typename T> void shiftLeft(T arr[], int size, int step)
{
	T sdvig = 0;
	for (int i = 0;i < step;i++)
	{
		sdvig = arr[0];
		for (int j = 0; j < size - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = sdvig;
	}
	cout << endl << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0;i < step;i++)
	{
		sdvig = arr[size - 1];
		for (int j = size - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = sdvig;
	}

}