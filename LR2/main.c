#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double func(double x);
_Bool isInArea(double x, double y);
int main(void)
{
	system("chcp 1251");
	system("cls");
	double x, y;
	int n;
	printf("Select task 1 or 2:\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{
		printf("The first task:\n");
		printf("X=");
		scanf_s("%lf", &x);
		printf("Y=");
		scanf_s("%lf", &y);
		isInArea(x, y);
		printf("%d", isInArea(x, y));
	}
	break;
	case 2:
	{
		printf("The second task:\n");
		printf("X=");
		scanf_s("%lf", &x);
		func(x);
		printf("%.3lf", func(x));
	}
	break;
	default:
		printf("Error ");
		break;
	}
	getchar();
	getchar();
	return(0);
}

_Bool isInArea(double x, double y)

{
	if (y > 0)
		if ((x >= -1) && (x <= 1) && (y <= 1))
			return(1);
		else
			return(0);
	else if ((x*x + y * y) <= 1)
		return(1);
	else
		return(0);
}

double func(double x)
{
	double f;
	x <= 0 ? (f = (abs(-(x * x) + 3 * x + 8))) : (f = (sqrt(x*x + (1 / x))));
	return(f);
}
