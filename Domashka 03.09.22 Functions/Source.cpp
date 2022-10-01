#include "stdafx.h"
//#include "constants.h"
#include "FillRand.h"
#include "statistics.h"
#include "print.h"
#include "shift.h"
#include "UnicRand.h"
#include "Sort.h"








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

   FillRand(arr, size);
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
	Search(arr, size); 

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









