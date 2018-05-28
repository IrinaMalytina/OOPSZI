#include <math.h>
#include <stdio.h>
double summ2(double eps)
{
	double a = eps + 1.0,s = 0.0;
	int i = 0;
	while (fabs(a) > eps)
	{
		a = pow(-1, i)*(1 / (pow(i, 2) + pow(2, i)));
		s += a;
		++i;
	}
	return (s);
}