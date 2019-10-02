#include <stdio.h>

int main()
{
	printf("Unesite broj: ");
	double broj = 0;
	scanf("%lf", &broj);
	// printf("%.6g", broj);
	double brojPomocni = broj;
	for(int i = 0; i < 10; i++) {
		if(i < 5) {
			printf("^ %d: %20.5lf\n", i+1, broj);
		} else if (i < 10) {
			printf("^ %d: %.5lf\n", i+1, broj);
		}
		broj = brojPomocni * broj;
	}
	return 0;
}
