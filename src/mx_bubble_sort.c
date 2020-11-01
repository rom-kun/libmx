#include "libmx.h"

int mx_bubble_sort(char** arr, int size)
{
	char bIsChanged = 0;
	int swapOpCount = 0;
	char* tmp;
	for (int i = 0; i < size - 1; i++) {
		bIsChanged = 0;
		for (int j = 0; j < size - 1 - i; j++) {
			if (mx_strcmp(arr[j], arr[j+1]) > 0) {
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
				swapOpCount++;
				bIsChanged = 1;
			}
		}
		if (bIsChanged == 0) {
			break;
		}
	}
	return swapOpCount;
}
