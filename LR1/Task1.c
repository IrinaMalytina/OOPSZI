#include <stdio.h>	

#include <math.h>	

#include <stdlib.h> 
int main(void)
{
	system("chcp 1251");
	system("cls");
	double x = 5;
	double x1,f;
	f = (sin(4 * x) / (1 + cos(4 * x)))*(cos(2 * x) / (1 + cos(2 * x)));
	printf("Õ=%.3lf\r\n", x);
	printf("F=%.3lf\r\n", f);
	printf("Enter X=");

	scanf_s("%lf", &x);

	f = (sin(4 * x) / (1 + cos(4 * x)))*(cos(2 * x) / (1 + cos(2 * x)));
	printf("F=%.3lf", f);
	getchar(); getchar();
	return 0;

}



