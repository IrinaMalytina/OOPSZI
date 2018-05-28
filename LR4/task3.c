#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void incrementHeapVariable()
{
	printf("Zadanie 3\n");

	int *d = (int *)malloc(sizeof(int));
	printf("Vvedite chislo ");
	scanf_s("%d", d);

	printf("Adres = %p, Znachenie = %d \n", d, *d);
	increment(d);
	printf("Adres = %p, Znachenie = %d \n", d, *d);
	free(d);
}
