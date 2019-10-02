#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Unesite cijeli broj: ");
	int broj;
	scanf("%d", &broj);
	double zadnji = 0, predzadnji = 0;
	if(broj < 0) broj = abs(broj);
	if(broj % 10 == broj) {
		predzadnji = 0;
		zadnji = broj;
	} else {
		zadnji = broj % 10;
		broj /= 10;
		predzadnji = broj % 10;
	}
	double zbir, razlika, proizvod;
	double kolicnik;
	zbir = predzadnji + zadnji;
	razlika = predzadnji - zadnji;
	proizvod = predzadnji * zadnji;
	kolicnik = predzadnji / zadnji;
	printf("Zbir zadnje dvije cifre (%.lf i %.lf) je: %.lf", predzadnji, zadnji, zbir);
	printf("\nRazlika zadnje dvije cifre (%.lf i %.lf) je: %.lf", predzadnji, zadnji, razlika);
	printf("\nProizvod zadnje dvije cifre (%.lf i %.lf) je: %.lf", predzadnji, zadnji, proizvod);
	if(zadnji == 0){
		printf("\nKolicnik zadnje dvije cifre (%.lf i %.lf) je: Nemoguce!", predzadnji, zadnji);
	} else {
		printf("\nKolicnik zadnje dvije cifre (%.lf i %.lf) je: %.6lf", predzadnji, zadnji, kolicnik);
	}
	return 0;
}
