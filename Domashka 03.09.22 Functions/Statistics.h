#pragma once
#include "stdafx.h"
#include "constants.h"

template<typename T> T Sum(T arr[], int size);

template<typename T> T Avg(T arr[], int size);

template<typename T> T minValueIn(T arr[], int size);

template<typename T> T maxValueIn(T arr[], int size);


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
	return Sum(arr, size) / double(size);
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
