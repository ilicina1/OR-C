#include <stdio.h>

void sortiraj(double niz[], int n)
{
	int min = 0;
	double temp = 0;
	for(int i = 0; i < n; i++) {
		min = i;
		for(int j = i + 1; j < n; j++) {
			if(niz[j] > niz[min]) min = j;
		}
		temp = niz[i];
		niz[i] = niz[min];
		niz[min] = temp;
	}
}

int main()
{
	double niz[5]= {0.000003, 0.000005, 0.000001, 0.000007, 0.000006};
	int i;
	sortiraj(niz, 5);
	for(i=0; i<5; i++) printf("%f ", niz[i]);
	return 0;
}
