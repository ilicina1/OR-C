#include <stdio.h>

int main()
{
	int ocjene[5];
	int suma = 0;
	float prosjek;

	printf("Unesite 5 ocjena: ");

	for(int i = 0; i < 5; i++) {
		scanf("%d", &ocjene[i]);
	}

	for(int i = 0; i < 5; i++) {
		suma += ocjene[i];
	}
	
	prosjek = suma / 5.00;
	
	printf("Zbir unesenih ocjena je %d, a prosjek je: %.2f", suma, prosjek);

	return 0;
}
