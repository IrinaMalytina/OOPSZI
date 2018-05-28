#include <stdio.h>
#include <math.h>

void incrementStackVariable()
{
	int g;
	printf("Zadanie 2\n");
	printf("Vvedite chislo = ");
	scanf_s("%d", &g);
	printf("Adres = %p, Znachenie  = %d\n", &g, g);
	increment(&g);
	printf("Adres = %p, Znachenie = %d\n", &g, g);
}
