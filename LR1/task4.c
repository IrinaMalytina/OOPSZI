#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void func();

double x, result;

int main(void)
{
	system("chcp 1251"); /*������� � ������� �� ������� ����*/
	system("cls"); /*������� �������*/
	x = 5;
	printf("�=%.3lf\r\n", x);
	func();
	printf("F=%.3lf\r\n", result);
	printf("Enter X=");
	scanf_s("%lf", &x);
	func();
	printf("F=%.3lf with X entered from the keyboard", result);

	getchar(),getchar();

	return(0);
}


void func(void)
{

	result = (sin(4 * x) / (1 + cos(4 * x)))*(cos(2 * x) / (1 + cos(2 * x)));

}
