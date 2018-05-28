#include <stdio.h>	
#include <math.h>	
#include <stdlib.h> 
double func(double x);
int main(void)
{
	system("chcp 1251");
	system("cls");
	double x = 5;
	printf("Õ=%.3lf\r\n", x);
	func(x);
	printf("F=%.3lf\r\n", func(x));
	printf("Enter X=");

	scanf_s("%lf", &x);

	func(x);
	printf("F=%.3lf with X entered from the keyboard", func(x));
	getchar(); getchar();
	return 0;

}
double func(double x)
{

	double f;

	f = (sin(4 * x) / (1 + cos(4 * x)))*(cos(2 * x) / (1 + cos(2 * x)));

	return(f);
}