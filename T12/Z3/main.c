#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	FILE* izlaz;
	int indexi[] = {12345, 12345, 12233, 13579, 13579, 13337, 13337, 13337, 13337, 13337, 12345, 13579, 17773, 17773};
	int predmeti[] = {3, 4, 4, 2, 3, 1, 2, 3, 4, 5, 5, 2, 1, 2};
	int ocjene[] = {10, 9, 10, 8, 8, 5, 6, 7, 7, 9, 10, 6, 8, 5};
	int n = sizeof(indexi) / sizeof(int);
	izlaz = fopen("ispiti.txt", "w");
	for (int i = 0; i < n; i++) {
		fprintf(izlaz, "%d %d %d\n", indexi[i], predmeti[i], ocjene[i]);
	}
	fclose (izlaz);
	FILE *ulaz;
	ulaz = fopen("ispiti.txt", "r");
	char znak = ' ';
	if (ulaz == NULL) {
		printf ("Pogreska kod otvaranja datoteke!\n\n");
		return 1;
	}
	char predmet = ' ';
	printf("Unesite predmet: ");
	predmet = getchar();
//	scanf("%s", &predmet);
	int razmak = 0, i = 0;
	int niz[100];
	bool red_predmeta = false;
	while((znak = fgetc(ulaz)) != EOF) {
		//	if(razmak == 1 && )
		if(znak == '\n') {
			razmak = 0;
			red_predmeta = false;
		}
		if(znak == predmet && razmak == 1) red_predmeta = true;
		if(razmak == 2 && red_predmeta == true) {
			int a = znak - '0';
			if(a == 1) niz[i] = 10;
			else niz[i] = a;
			i++;
			razmak = 0;
		}
		if(znak == ' ') razmak++;
	}
	double prosjecna_ocjena = 0, suma = 0;
	for(int j = 0; j < i; j++) {
		suma += niz[j];
	}
	prosjecna_ocjena = suma / i;
	printf("Prosjecna ocjena: %.2lf\nProlaznost: ", prosjecna_ocjena);
	return 0;
}
