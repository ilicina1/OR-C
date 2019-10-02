#include <stdio.h>
#define BROJ_EL 10

int main() {
	int niz[BROJ_EL], suma=0, sumapar=0, i, br_parnih=0, max, min;
	float prosjek, prosjekpar;
	
	
	for(i=0; i<BROJ_EL; i++) {	
		printf("Unesite %d. cijeli broj: ", i+1);
		scanf("%d", &niz[i]);
		
		suma += niz[i];
		if(niz[i]%2==0) {
			sumapar += niz[i];
			br_parnih++;
		}
	}
	
	prosjek = (float)suma/BROJ_EL;
	printf("Srednja vrijednost unesenih brojeva je %.2f.\n", prosjek);
	
	if(br_parnih==0) {
		printf("Srednja vrijednost parnih brojeva je 0.00.\n");
	}
	else {
		prosjekpar = (float)sumapar/br_parnih;
		printf("Srednja vrijednost parnih brojeva je %.2f.\n", prosjekpar);
	}
	max = niz[0];
	min = niz[0];
	for(i=1; i<BROJ_EL; i++) {
		if(niz[i] > max) {
			max = niz[i];
		}
		if(niz[i] < min) {
			min = niz[i];
		}
	}
	printf("Najveci element je %d a najmanji %d.\n", max, min);
	
	return 0;
}
