#include <stdio.h>

double parallel_max(double *p, double *k)
{
	if (p + 1 == k)
		return *p;
	double b1 = parallel_max(p, p + (k - p) / 2);
	double b2 = parallel_max(p + (k - p) / 2, k);
	if(b1 > b2)
		return b1;
	else
		return b2;

}

int main()
{
	double p[100];
	double *

	k = p + 100;

	return 0;
}
