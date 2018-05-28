#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void func();

double x, result;

int main(void)
{
	system("chcp 1251"); /*Переход в консоли на русский язык*/
	system("cls"); /*Очистка консоли*/
	x = 5;
	printf("Х=%.3lf\r\n", x);
	func();
	printf("F=%.3lf\r\n", result);
	printf("Enter X=");
	scanf_s("%lf", &x);
	func();
	printf("F=%.3lf with X entered from the keyboard", result);

	getchar(), getchar();

	return(0);
}
