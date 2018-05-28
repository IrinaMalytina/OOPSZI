#include <math.h>
#include <stdio.h>
double summ(int n)
{
	double a=0,s = 0.0;
	int i = 0;

	while (i < n)
	{
		a = pow(-1, i)*(1 / ( pow(i, 2) + pow(2,i)));
		s =s+ a;
		++i;
	}
	return (s);
}