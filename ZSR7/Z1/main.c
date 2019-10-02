#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

void ocisti(int c)
{
	while ((c = getchar()) != '\n' && c != EOF) { }
	printf("Unos pogresan!\n");
	printf("Unesite cijeli broj: ");
}

int unesi()
{
	float broj = 0;
	printf("Unesite cijeli broj: ");
	for(;;) {
		scanf("%f", &broj);
		if((fmod(broj, (int) broj) > 0)) ocisti(broj);
		else if(isdigit(broj) == 0) {
			ocisti(broj);
		} else {
			break;
		}
	}
	return broj;
}

float prosjek(int broj)
{
	int brojac = 0;
	int modulo = 0;
	if(broj == 0) return (float) broj;
	while(broj != 0) {
		modulo += broj % 10;
		broj /= 10;
		brojac++;
	}
	return modulo / brojac;
}

int main()
{
	int b;
	b = unesi();
	float rezultat = prosjek(b);
	printf("Prosjek je: %0.7g", rezultat);
	return 0;
}
