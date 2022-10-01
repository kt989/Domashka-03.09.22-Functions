#include "stdafx.h"

void shiftRight(int arr[], int size, int step)
{
	int sdvig = 0;
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

void shiftRight(double arr[], int size, int step)
{
	double sdvig = 0;
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

void shiftRight(float arr[], int size, int step)
{
	float sdvig = 0;
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

void shiftRight(char arr[], int size, int step)
{
	char sdvig = 0;
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
		cout << char(arr[i]) << "\t";
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

void shiftLeft(int arr[], int size, int step)
{
	int sdvig = 0;
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

void shiftLeft(double arr[], int size, int step)
{
	double sdvig = 0;
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

void shiftLeft(float arr[], int size, int step)
{
	float sdvig = 0;
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

void shiftLeft(char arr[], int size, int step)
{
	char sdvig = 0;
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
		cout << char(arr[i]) << "\t";
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