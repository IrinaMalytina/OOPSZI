#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int g, x;
	const int n = 10;
	int arr[10];

	while (g = -1)
	{
		printf("Zadanie 2 - 1\n");
		printf("Zadanie 3 - 2\n");
		printf("Zadanie 7 - 3\n");
		printf("Zadanie 8 - 4\n");
		printf("Vihod - 5\n");
		printf("Vuberite zadanie\n");
		scanf_s("%d", &x);
		switch (x)
		{
		case 1:
		{
			printf("Chislo v steke\n");
			incrementStackVariable();
			break;
		}
		case 2:
		{
			printf("Chislo v dinamicheskoy pamayti\n");
			incrementHeapVariable();
			break;
		}
		case 3:
		{
			printf("Massiv iz n-elementov v steke\n");
			sortStackArray(arr, n);
			break;
		}
		case 4:
			printf("Massiv iz n-elementov v dinamicheskoy pamayti\n");
			sortHeapArray(arr, n);
			break;
		case 5:
			return(0);
		default:
			printf("Nepravilnuy vvod\n");
			break;
		}
		getchar();
		getchar();
	}
	return(0);
}