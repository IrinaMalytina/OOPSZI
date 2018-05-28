#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int main(void)
{
	system("chcp 1251");
	system("cls"); 
	x = 5;
	printf("Х=%.3lf\r\n", x);
	func();
	printf("F=%.3lf\r\n", result);
	printf("Введите Х=");
	scanf_s("%lf", &x);
	func();
	printf("F=%.3lf при X,Y введенных с клавиатуры", result);

	getchar(), getchar();

	return(0);
}
