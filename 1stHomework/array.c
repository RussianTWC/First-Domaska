#include "array.h"

MyArray* CreateArray(int amount) {
	if (amount < 0) {
		printf("Enter correct size!");
		return NULL;
	}

	MyArray* arr = (MyArray*)malloc(sizeof(MyArray));
	if (!arr) {
		printf("Pointer creation error!");
		return NULL;
	}

	arr->array = (int*)malloc(amount * sizeof(int));
	if (!arr->array) {
		printf("Pointer creation error!");
		return NULL;
	}

	arr->amount_elem = 0;
	arr->size = 0;

	return arr;
}

void SetValueArray(MyArray* arr, int position, int value) {
	if (!arr || !arr->array) {
		printf("Array pointer is null!");
		return;
	}

	if (position < 0) {
		printf("Array position must be > 0!");
		return;
	}

	*(arr->array + position) = value;
}

void AddValueArray(MyArray* arr, int value) {
	if (arr->amount_elem == arr->size) {
		int size = arr->size + 1;
		int* tmp = (int*)realloc(arr->array, sizeof(int) * (arr->size + 1));
		if (!tmp) {
			printf("Array pointer creation error!");
			return;
		}

		arr->array = tmp;
		*(arr->array + arr->amount_elem) = value;
		++arr->amount_elem;
		++arr->size;
	}
}

int GetValueArray(MyArray* arr, int position) {
	if (!arr || !arr->array) {
		printf("Array pointer is null!");
		return -1;
	}

	if (position < 0) {
		printf("Array position must be > 0!");
		return -1;
	}

	//int value = *(arr->array + position);

	return *(arr->array + position);
}

void FreeArray(MyArray* arr) {
	if (!arr || arr->array) {
		printf("Array pointer is null!");
		return;
	}

	free(arr->array);
	free(arr);
}