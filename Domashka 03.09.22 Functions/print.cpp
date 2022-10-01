#include "stdafx.h"
#include "constants.h"

void Print(int arr[], int size)
{
	cout << endl << endl;
	for (int i = 0;i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void Print(double arr[], int size)
{
	cout << endl << endl;
	for (int i = 0;i < size; i++)
	{
		cout << setprecision(2) << arr[i] << "\t";
	}
}

void Print(float arr[], int size)
{
	cout << endl << endl;
	for (int i = 0;i < size; i++)
	{
		cout << setprecision(3) << arr[i] << "\t";
	}
}
void Print(char arr[], int size)
{
	cout << endl << endl;
	for (int i = 0;i < size; i++)
	{
		cout << char(arr[i]) << "\t";
	}
}

void Print(int arr[ROWS][COLLS], int ROWS, int COLLS)
{
	cout << endl << endl;
	for (int i = 0;i < ROWS; i++)
	{
		for (int j = 0;j < COLLS; j++) cout << arr[i][j] << "\t";
		cout << endl << endl;
	}

}

void Print(double arr[ROWS][COLLS], int ROWS, int COLLS)
{
	cout << endl << endl;
	for (int i = 0;i < ROWS; i++)
	{
		for (int j = 0;j < COLLS; j++) cout << arr[i][j] << "\t";
		cout << endl << endl;
	}

}

void Print(float arr[ROWS][COLLS], int ROWS, int COLLS)
{
	cout << endl << endl;
	for (int i = 0;i < ROWS; i++)
	{
		for (int j = 0;j < COLLS; j++) cout << arr[i][j] << "\t";
		cout << endl << endl;
	}

}

void Print(char arr[ROWS][COLLS], int ROWS, int COLLS)
{
	cout << endl << endl;
	for (int i = 0;i < ROWS; i++)
	{
		for (int j = 0;j < COLLS; j++) cout << char(arr[i][j]) << "\t";
		cout << endl << endl;
	}

}

void ReversePrint(int arr[], int size)
{
	cout << endl << endl;
	for (int i = size - 1;i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

void ReversePrint(double arr[], int size)
{
	cout << endl << endl;
	for (int i = size - 1;i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

void ReversePrint(float arr[], int size)
{
	cout << endl << endl;
	for (int i = size - 1;i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

void ReversePrint(char arr[], int size)
{
	cout << endl << endl;
	for (int i = size - 1;i >= 0; i--)
	{
		cout << char(arr[i]) << "\t";
	}
}