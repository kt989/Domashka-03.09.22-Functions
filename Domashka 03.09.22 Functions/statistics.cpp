//#include "statistics.h"

int Sum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0;i < 10; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

double Sum(double arr[], int size)
{
	double sum = 0;
	for (int i = 0;i < 10; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

float Sum(float arr[], int size)
{
	float sum = 0;
	for (int i = 0;i < 10; i++)
	{
		sum += arr[i];
	}
	return (sum);
}

char Sum(char arr[], int size)
{
	int sum = 0;
	for (int i = 0;i < 10; i++)
	{
		sum += arr[i];
	}
	sum = sum % 255;
	return (char(sum));
}

double Avg(int arr[], int size)
{
	return Sum(arr, size) / double(size);
}

double Avg(double arr[], int size)
{
	return Sum(arr, size) / size;
}

double Avg(float arr[], int size)
{
	return Sum(arr, size) / size;
}

char Avg(char arr[], int size)
{
	return char(Sum(arr, size) / size);
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

double minValueIn(double arr[], int size)
{
	double minValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (minValue > arr[i]) minValue = arr[i];
	}
	return (minValue);
}

float minValueIn(float arr[], int size)
{
	float minValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (minValue > arr[i]) minValue = arr[i];
	}
	return (minValue);
}

char minValueIn(char arr[], int size)
{
	char minValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (minValue > arr[i]) minValue = arr[i];
	}
	return (char(minValue));
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

double maxValueIn(double arr[], int size)
{
	double maxValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (maxValue < arr[i]) maxValue = arr[i];
	}
	return (maxValue);
}

float maxValueIn(float arr[], int size)
{
	float maxValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (maxValue < arr[i]) maxValue = arr[i];
	}
	return (maxValue);
}

char maxValueIn(char arr[], int size)
{
	char maxValue = arr[0];
	for (int i = 0;i < size;i++)
	{
		if (maxValue < arr[i]) maxValue = arr[i];
	}
	return (char(maxValue));
}