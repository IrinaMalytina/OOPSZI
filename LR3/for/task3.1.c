#include <math.h>
#include <stdio.h>
double summ(int n)
{
	double a = 0, s = 0.0;
	int i = 0;

	for(i=0;i<=n-1;i++)
	{
		a = pow(-1, i)*(1 / (pow(i, 2) + pow(2, i)));
		s = s + a;
		
	}
	return (s);
}