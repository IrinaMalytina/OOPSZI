#include <math.h>
#include <stdio.h>
double a;

int findFirstNegativeElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(1 / (pow(i, 2) + pow(2, i)));
		if (fabs(a) <= eps && a < 0)
		{
			return(i + 1);
		}
	}
}