#include "template_print.h"



template<typename T> void Print(T arr[], int size)
{
	cout << endl << endl;
	for (int i = 0;i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

template<typename T> void Print(T arr[ROWS][COLLS], int ROWS, int COLLS)
{
	cout << endl << endl;
	for (int i = 0;i < ROWS; i++)
	{
		for (int j = 0;j < COLLS; j++) cout << arr[i][j] << "\t";
		cout << endl << endl;
	}

}

template<typename T> void ReversePrint(T arr[], int size)
{
	cout << endl << endl;
	for (int i = size - 1;i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}
