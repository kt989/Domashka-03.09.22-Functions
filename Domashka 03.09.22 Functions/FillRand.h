#pragma once
#include "constants.h"
//#include "FillRand.cpp"
void FillRand(int arr[], int size, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[], int size, int MinRand = 0, int MaxRand = 100);
void FillRand(float arr[], int size, int MinRand = 0, int MaxRand = 100);
void FillRand(char arr[], int size);
void FillRand(int arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand = 0, int MaxRand = 100);
void FillRand(double arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand = 0, int MaxRand = 100);
void FillRand(float arr[ROWS][COLLS], int ROWS, int COLLS, int MinRand = 0, int MaxRand = 100);
void FillRand(char arr[ROWS][COLLS], int ROWS, int COLLS);
void FillRand_1(int arr[], int size);//«аполнение массива повтор€ющимис€ числами
