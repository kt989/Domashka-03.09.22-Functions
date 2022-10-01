#include "stdafx.h"
//#include "constants.h"
#include "FillRand.h"


void FillRand(int arr[], int size, int MinRand, int MaxRand)
{
	for (int i = 0;i < size;i++)
		arr[i] = rand() % (MaxRand - MinRand) + MinRand;
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
		arr[i] = char(rand() % 255);
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
		arr[i] = rand() % size / 2;
}