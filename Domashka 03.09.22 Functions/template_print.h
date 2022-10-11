#pragma once
#include "stdafx.h"
#include "constants.h"


template<typename T> void Print(T arr[], int size);

template<typename T> void Print(T arr[ROWS][COLLS], int ROWS, int COLLS);

template<typename T> void ReversePrint(T arr[], int size);