#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define DIF "\n-------------------------------------------------------------------------------\n"

const int ROWS = 5;
const int COLLS = 3;
void FillRand(int arr[], int size, int MinRand=0, int MaxRand=100);
void FillRand(double arr[], int size, int MinRand = 0, int MaxRand = 100);
void FillRand(float arr[], int size, int MinRand = 0, int MaxRand = 100);
void FillRand(char arr[], int size);

void FillRand(int arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand = 0, int MaxRand = 100);
void FillRand(float arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand = 0, int MaxRand = 100);
void FillRand(char arr[ROWS][COLLS], int ROWS, int COLLS);

void FillRand_1(int arr[], int size);//Заполнение массива повторяющимися числами

template<typename T> void Print (T arr[], int size);

template<typename T> void Print(T arr[ROWS][COLLS], int ROWS, int COLLS);

template<typename T> void ReversePrint(T arr[], int size);

template<typename T> T Sum(T arr[], int size);

template<typename T> T Avg(T arr[], int size);

template<typename T> T minValueIn(T arr[], int size);

template<typename T> T maxValueIn(T arr[], int size);

template<typename T> void shiftLeft(int arr[], int size, int step);

template<typename T> void shiftRight(T arr[], int size, int step);

template<typename T> void Sort_up(int arr[], int size); //сортировкa массива

template<typename T> void Sort_down(T arr[], int size);

void Search(int arr[], int size);// и поиск повторяющихся чисел 

template<typename T> void UniqueRand(T arr[], int size);



void main()
{
	setlocale(LC_ALL, "Rus");
	cout << endl << "Дано: массив из 10 элементов "; 
	cout << endl << endl << "Для заполнения массива случайными числами нажмите Enter ";
	int key = _getch();
	//cout << key;
	while (key != 13) key = _getch();
	const int size = 10;
	int arr[size] = {};
	double brr[size] = {};
	float crr[size] = {};
	char drr[size] = {};
	int arr_1[ROWS][COLLS];
	double brr_1[ROWS][COLLS];
	float crr_1[ROWS][COLLS];
	char drr_1[ROWS][COLLS];

	srand(time(NULL));

   /* FillRand(arr, size);
	FillRand(brr, size);
	FillRand(crr, size);
	FillRand(drr, size);

	Print(arr, size);
	Print(brr, size);
	Print(crr, size);
	Print(drr, size);
	cout << DIF;

	cout << endl << endl << "Для вывода массивов в обратном порядке нажмите Enter ";
	key = _getch();
	while (key != 13) key = _getch();
	ReversePrint(arr, size);
	ReversePrint(brr, size);
	ReversePrint(crr, size);
	ReversePrint(drr, size);
	cout << DIF<<endl<<endl;

	cout << endl << endl << "Для вывода суммы элементов массивов нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout<< endl << endl <<Sum(arr, size) <<endl<< endl;
	cout << Sum(brr, size) << endl << endl;
	cout << Sum(crr, size) << endl << endl;
	cout << Sum(drr, size) << endl << DIF << endl;

	cout << endl << endl << "Для вывода среднего значения элементов массивов нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout << endl << endl << Avg(arr, size) << endl << endl;
	cout << Avg(brr, size) << endl << endl;
	cout << Avg(crr, size) << endl << endl;
	cout << Avg(drr, size) << endl << DIF << endl;

	cout << endl << endl << "Для вывода минимального значения элементов массивов нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout << endl<< endl<< minValueIn(arr, size) << endl << endl;
	cout << minValueIn(brr, size) << endl << endl;
	cout << minValueIn(crr, size) << endl << endl;
	cout << minValueIn(drr, size) << endl << DIF << endl;

	cout << endl << endl << "Для вывода максимального значения элементов массивов нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	cout << endl << endl << maxValueIn(arr, size) << endl << endl;
	cout << maxValueIn(brr, size) << endl << endl;
	cout << maxValueIn(crr, size) << endl << endl;
	cout << maxValueIn(drr, size) << endl << DIF << endl;

	cout << endl << endl << "Для продолжения нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();

	system("CLS");
	Print(arr, size);
	Print(brr, size);
	Print(crr, size);
	Print(drr, size);
	cout << DIF << endl << endl;

	cout << endl << endl << "Введите число, показывающее на какое количество позиций необходимо сдвинуть массив влево:   ";
	int step;
	cin >> step;
	shiftLeft(arr, size, step);
	shiftLeft(brr, size, step);
	shiftLeft(crr, size, step);
	shiftLeft(drr, size, step);
	cout << DIF << endl<<endl;

	cout << endl << endl << "Введите число, показывающее на какое количество позиций необходимо сдвинуть массив вправо:   ";
	cin >> step;
	shiftRight(arr, size, step);
	shiftRight(brr, size, step);
	shiftRight(crr, size, step);
	shiftRight(drr, size, step);
	cout << DIF << endl << endl;
	
	cout << endl << endl << "Для сортировки по ээлементов массивов по возрастанию нажмите 1";
	cout << endl << endl << "Для сортировки по ээлементов массивов по убыванию нажмите 0";
	do
	{
		key = _getch();
		if (key == 48) // 0
		{ 
			Sort_down(arr, size);
			Sort_down(brr, size);
			Sort_down(crr, size);
			Sort_down(drr, size);
			cout << endl << "Массивы по убыванию " << endl << endl;
			Print(arr, size);
			Print(brr, size);
			Print(crr, size);
			Print(drr, size);
			cout << endl << DIF << endl << endl;
			break;
		}
			
		else if (key == 49) //1
		{
			Sort_up(arr, size);
			Sort_up(brr, size);
			Sort_up(crr, size);
			Sort_up(drr, size);
			cout << endl << "Массивы по возрастанию " << endl << endl;
			Print(arr, size);
			Print(brr, size);
			Print(crr, size);
			Print(drr, size);
			cout << endl << DIF << endl << endl;
			break;
		}
		else cout << "Повторите ввод";
	} while (key != 48 || key != 49);

	cout << endl << endl << "Для замены повторяющихся ээлементов массива нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	UniqueRand(arr, size);
	UniqueRand(brr, size);
	UniqueRand(crr, size);
	UniqueRand(drr, size);
	cout << endl << DIF << endl << endl;

	cout << endl << endl << "Для продолжения нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();

	system("CLS");
	cout << "  Для вывода нового массива нажмите Enter" << endl << endl;
	key = _getch();
	while (key != 13) key = _getch();
	FillRand_1(arr, size);
	Print(arr, size);
	cout << endl << endl;
	Search(arr, size); */

	cout << endl << endl << "Для продолжения нажмите Enter    ";
	key = _getch();
	while (key != 13) key = _getch();
	system("CLS");
	FillRand(arr_1, ROWS, COLLS);
	FillRand(brr_1, ROWS, COLLS);
	FillRand(crr_1, ROWS, COLLS);
	FillRand(drr_1, ROWS, COLLS);

	cout << "Двумерные массивы различных типов данных: " << endl<<DIF<<endl;

	Print(arr_1, ROWS, COLLS);
	Print(brr_1, ROWS, COLLS);
	Print(crr_1, ROWS, COLLS);
	Print(drr_1, ROWS, COLLS);
	cout << DIF;
}

void FillRand(int arr[], int size, int MinRand, int MaxRand)
{
	for (int i = 0;i < size;i++)
		arr[i] = rand() % (MaxRand-MinRand) + MinRand;
}

void FillRand(double arr[], int size, int MinRand, int MaxRand)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = (rand() % (MaxRand - MinRand) + MinRand);
	    arr[i] /= 100;
    }
}

void FillRand(float arr[], int size, int MinRand, int MaxRand)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = (rand() % (MaxRand - MinRand) + MinRand);
		arr[i] /= 100;
	}
}

void FillRand(char arr[], int size)
{
	for (int i = 0;i < size;i++)
		arr[i] = char(rand() % 255) ;
}

void FillRand(int arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand, int MaxRand)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
        arr[i][j] = (rand() % (MaxRand - MinRand) + MinRand);
		}
	}
}

void FillRand(double arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand, int MaxRand)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
			arr[i][j] = (rand() % (MaxRand - MinRand) + MinRand);
			arr[i][j] /= 100;
		}
	}
}

void FillRand(float arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand, int MaxRand)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
			arr[i][j] = (rand() % (MaxRand - MinRand) + MinRand);
			arr[i][j] /= 100;
		}
	}
}

void FillRand(char arr[ROWS][COLLS], int ROWS, int COLLS)
{
	for (int i = 0;i < ROWS;i++)
	{
		for (int j = 0; j < COLLS; j++)
		{
			arr[i][j] = char(rand() % 255);
		}
	}
}

void FillRand_1(int arr[], int size)
{
	for (int i = 0;i < size;i++)
		arr[i] = rand() % size/2;
}

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
	for (int i = size-1;i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

template<typename T> T Sum(T arr[], int size) 
{
	T sum = 0;
	for (int i = 0;i < 10; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

template<typename T> T Avg(T arr[], int size)
{
   return Sum(arr,size)/double(size);
}

template<typename T> T minValueIn(T arr[], int size)
{
	T minValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (minValue > arr[i]) minValue = arr[i];
	}
	return (minValue);
}

template<typename T> T maxValueIn(T arr[], int size)
{
	T maxValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (maxValue < arr[i]) maxValue = arr[i];
	}
	return (maxValue);
}

template<typename T> void shiftRight(T arr[], int size, int step)
{
	T sdvig = 0;
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

template<typename T> void shiftLeft(T arr[], int size, int step)
{
	T sdvig = 0;
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

template<typename T> void Sort_up(T arr[], int size)
{
	T buffer;
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
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


void Search(int arr[], int size)
{
	int count;
	cout << endl << "Значение\t\tКоличество повторений" << endl << endl;
	for (int i = 0;i < size;i++)
	{
		count = 1;
		for (int j=0; j < size;j++)
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