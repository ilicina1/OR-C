#include <stdio.h>

void zaokruzi(float *pok, int vel)
{
	int i;
	
	for(i=0; i<vel; i++) {
		printf("%.1f", *pok);
		pok++;
	}
	
}

int main()
{
	float niz[100];
	int vel, i;
	
	printf("Unesite velicinu niza: \n");
	scanf("%i", &vel);
	
	printf("Unesite elemente niza: \n");
	double *pok=vel;
	
	for(i=0; i<vel; ++i){
		scanf("%lf", pok++);	
	}
	
	zaokruzi(niz, vel);
	pok = niz;
	
	for (i = 0; i < vel; ++i)
		printf ("%f", *pok++);
	
	return 0;
	
}
