#include <stdio.h>
#define VISINA 100
#define SIRINA 100
int main()
{
	int i, j;
	float suma = 0, A, B, matrica[VISINA][SIRINA];

	printf("Unesite dimenzije matrice: ");
	scanf("%f%f", &A, &B);

	if(A > VISINA)
		A = VISINA;

	if(B > SIRINA)
		B = SIRINA;

	printf("\nUnesite elemente matrice: \n");

	for(i = 0; i < A; i++){
		for(j = 0; j < B; j++) {
			scanf("%f", &matrica[i][j]);
		}
	}

	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++) {
			if (i == 0)
				suma += matrica[i][j];
			if (i == B - 1)
				suma += matrica[i][j];
			if (j == 0)
				suma += matrica[i][j];
			if (j == A - 1)
				suma += matrica[i][j];
		}
	}
	
	printf("Suma elemenata na rubu je %.2f", suma);
}
