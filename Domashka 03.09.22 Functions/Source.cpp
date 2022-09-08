#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void FillRand(int arr[], int size);
void Print (int arr[], int size);
void ReversePrint(int arr[], int size);
int Sum(int arr[], int size);
double Avg(int sum, int size);
int minValueIn(int arr[], int size);
int maxValueIn(int arr[], int size);
void shiftLeft(int arr[], int size, int step);
void shiftRight(int arr[], int size, int step);
void UniqueRand(int arr[], int size);

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << endl << "Дано: массив из 10 элементов "; 
	cout << endl << endl << "Для заполнения массива случайными числами нажмите Enter ";
	int key = _getch();
	
	while (key != 13) key = _getch();
	const int size = 10;
	int arr[size] = {};
	srand(time(NULL));

	FillRand(arr, size);
	Print(arr, size);

	cout << endl << endl << "Для вывода массива в обратном порядке нажмите Enter ";
	key = _getch();
	while (key != 13) key = _getch();
	ReversePrint(arr, size);

	cout << endl << endl << "Для вывода суммы элементов массива нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	int sum = Sum(arr, size);
	cout<<sum<<endl<< endl;

	cout << endl << endl << "Для вывода среднего значения элементов массива нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout << Avg(sum, size) << endl << endl;

	cout << endl << endl << "Для вывода минимального значения элементов массива нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout << minValueIn(arr, size) << endl << endl;

	cout << endl << endl << "Для вывода максимального значения элементов массива нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout << maxValueIn(arr, size) << endl << endl;

	cout << endl << endl << "Введите число, показывающее на какое количество позиций необходимо сдвинуть массив влево:   ";
	int step;
	cin >> step;
	shiftLeft(arr, size, step);

	cout << endl << endl << "Введите число, показывающее на какое количество позиций необходимо сдвинуть массив вправо:   ";
	cin >> step;
	shiftRight(arr, size, step);
	
	cout << endl << endl << "Для замены повторяющихся ээлементов массива нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	UniqueRand(arr, size);

}

void FillRand(int arr[], int size)
{
	for (int i = 0;i < 10;i++)
		arr[i] = rand()%100;
}

void Print(int arr[], int size)
{
	cout << endl << endl;
	for (int i = 0;i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void ReversePrint(int arr[], int size)
{
	cout << endl << endl;
	for (int i = size-1;i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

int Sum(int arr[], int size) 
{
	int sum = 0;
	for (int i = 0;i < 10; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

double Avg(int sum, int size)
{
	double avg = double(sum) / double(size);
	return (avg);
}

int minValueIn(int arr[], int size)
{
	int minValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (minValue > arr[i]) minValue = arr[i];
	}
	return (minValue);
}


int maxValueIn(int arr[], int size)
{
	int maxValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (maxValue < arr[i]) maxValue = arr[i];
	}
	return (maxValue);
}

void shiftRight(int arr[], int size, int step)
{
	int sdvig = 0;
	for (int i = 0;i < step;i++)
	{
		sdvig = arr[size-1];
		for (int j = size-1; j >0; j--)
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
		for (int j = 0; j < size-1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[size-1] = sdvig;
	}

}

void shiftLeft(int arr[], int size, int step)
{
	int sdvig = 0;
	for (int i = 0;i < step;i++)
	{
		sdvig = arr[0];
		for (int j = 0; j <size-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[size-1] = sdvig;
	}
	cout << endl << endl;
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << "\t";
	}

	for (int i = 0;i < step;i++)
	{
		sdvig = arr[size-1];
		for (int j = size-1; j >0; j--)
		{
			arr[j] = arr[j -1];
		}
		arr[0] = sdvig;
	}

}

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