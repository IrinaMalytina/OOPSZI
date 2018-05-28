#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include "Header.h"

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int i = 0, numOfTask;

	while (i != -1)
	{
		system("cls");
		printf("Zadanie 1\n");
		printf("Zadanie 2\n");
		printf("Zadanie 3\n");
		printf("Zadanie 4\n");
		printf("Zadanie 5\n");
		printf("Vuhod - 6\n\n");
		int n = 0, k = 0;
		double eps = 0.0;

		printf("Vvedite nomer zadaniya: ");
		scanf_s("%d", &numOfTask);
		switch (numOfTask)
		{
		case 1:
			system("cls");
			printf("Zadanie 1\n");
			printf("Vvedite chislo slagaemuh n: ");
			scanf_s("%d", &n);
			printf("Summa = %lf\n\n", summ(n));
			system("pause");
			break;


		case 2:
			system("cls");
			printf("Zadanie 2\n");
			printf("Vvedite tochnost eps = ");
			scanf_s("%lf", &eps);
			printf("Summa = %f\n\n", summ2(eps));
			system("pause");
			break;

		case 3:
			system("cls");
			printf("Zadanie 3\n");
			printf("Vvedite n=");
			scanf_s("%d", &n);
			printf("Vvedite k=");
			scanf_s("%d", &k);
			printf("Posledovatelnoct = \n");
			print(n, k);
			system("pause");
			break;
		case 4:
			system("cls");
			printf("Zadanie 4\n");
			printf("Vvedite eps = ");
			scanf_s("%lf", &eps);
			printf("Nomer =  %d\n\n", findFirstElement(eps));
			system("pause");
			break;
		case 5:
			system("cls");
			printf("Zadanie 5\n");
			printf("Vvedite eps = ");
			scanf_s("%lf", &eps);
			printf("Nomer = %d\n\n", findFirstNegativeElement(eps));
			system("pause");
			break;
		case 6:
			i = -1;
			break;
		default:
			printf("Nepravilnuy vvod \n");
			system("pause");
		}

	}
}