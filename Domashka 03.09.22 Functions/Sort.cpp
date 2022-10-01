#include "stdafx.h"


void Sort_up(int arr[], int size)
{
	int buffer;
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

void Sort_up(double arr[], int size)
{
	double buffer;
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

void Sort_up(float arr[], int size)
{
	float buffer;
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

void Sort_up(char arr[], int size)
{
	char buffer;
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

void Sort_down(int arr[], int size)
{
	int buffer;
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

void Sort_down(double arr[], int size)
{
	double buffer;
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

void Sort_down(float arr[], int size)
{
	float buffer;
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

void Sort_down(char arr[], int size)
{
	char buffer;
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

void Search(int arr[], int size)
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