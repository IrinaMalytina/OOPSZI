#include <math.h>
#include <stdio.h>
double a;
int m = -1;

int findFirstElement(double eps)
{
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i)*(1 / (pow(i, 2) + pow(2, i)));
		if (fabs(a) <= eps)
		{
			m = i + 1;
			break;
		}
	}
	return(m);
}