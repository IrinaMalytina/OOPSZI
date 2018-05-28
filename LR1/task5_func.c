#include <stdio.h>	
#include <math.h>	
#include <stdlib.h> 
double func(double x)
{

	double f;

	f = (sin(4 * x) / (1 + cos(4 * x)))*(cos(2 * x) / (1 + cos(2 * x)));

	return(f);
}