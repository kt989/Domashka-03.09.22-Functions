#include "stdafx.h"

void UniqueRand(int arr[], int size)
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

void UniqueRand(double arr[], int size)
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


void UniqueRand(float arr[], int size)
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


void UniqueRand(char arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j) continue;
			else if (arr[i] == arr[j]) arr[j] = char(rand() % 255);//что-то не работает для char
		}
	}

	cout << endl;
	for (int i = 0;i < size;i++) cout << char(arr[i]) << "\t";
	cout << endl << endl;
}