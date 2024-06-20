#include "array.h"

int main() {
	int size = 0;
	MyArray* arr = CreateArray(size);

	for (int i = 0; i < 5; ++i) {
		AddValueArray(arr, i);
	}
	
	for (int i = 0; i < 5; ++i) {
		int value = GetValueArray(arr, i);
		printf("%d ", value);
	}

	return 0;
}