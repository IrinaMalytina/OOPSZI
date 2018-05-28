#include <stdio.h>
#include "Header.h"

void sortStackArray(int *arr, int n)
{
	n = 0;
	printf("Vvedite razmer massiva: ");
	scanf_s("%d", &n);
	*arr = (int *)malloc(sizeof(int)*n);
	writeArray(arr, n);
	readArray(arr, n);
	sort(arr, n);
	readArray(arr, n);
}