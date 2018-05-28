#include <math.h>
#include <stdio.h>

void increment(int *n)
{
	if (*n != 0)
	{
		printf("Zadanie 1\n");
		printf("Adres =%p , znachenie = %d\n", n, *n);
		++*n;
		printf("Novoe znachenie = %d\n", *n);
	}
	else
		printf("Ukazatel pustoy");
}