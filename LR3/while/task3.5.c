#include <math.h>
#include <stdio.h>
double a;

int findFirstNegativeElement(double eps)
{
	int i = 0;
	while (i > -1)
	{
		a = pow(-1, i)*(1 / (pow(i, 2) + pow(2, i)));
		if (fabs(a) <= eps && a < 0.0)
		{
			return(i + 1);
		}
		++i;
	}
}