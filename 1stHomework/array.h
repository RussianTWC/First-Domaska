#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct MyArray {
	int* array;
	int size;
	int amount_elem;
}MyArray;

MyArray* CreateArray(int amount);
void SetValueArray(MyArray* arr, int position, int value);
void AddValueArray(MyArray* arr, int value);
int GetValueArray(MyArray* arr, int position);
void Free_2dimArr(MyArray* arr);