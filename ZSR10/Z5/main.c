#include <stdio.h>
#include <string.h>

void nta_rijec(const char* str, char* rijec, int n)
{
	int broj_rijeci = 0, indeks = 0, indeks_kraja = 0, brojac = 0, pomocni = 0;
	int duzina = strlen(str);
	for(int i = 0; i < duzina; i++) {
		if(  (i == 0) && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )) indeks = i;
		if(((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && ((str[i-1] < 'A' || str[i-1] > 'Z') && (str[i-1] < 'a' || str[i-1] > 'z'))) {
			indeks = i;
		}
		if(((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')) && ((str[i-1] >= 'A' && str[i-1] <= 'Z') || (str[i-1] >= 'a' && str[i-1] <= 'z'))) {
			indeks_kraja = brojac - 1;
			broj_rijeci++;
			if(broj_rijeci == n) {
				while(indeks != indeks_kraja+1) {
					pomocni++;
					*rijec = str[indeks];
					rijec++;
					indeks++;
				}
			}
		}
		brojac++;
	}
}

int main()
{
	const char *tekst = "ovo,je.jako-nepismen tekst .";
	char rijec[101];
	nta_rijec(tekst, rijec, 5);
	printf ("3. rijec: '%s'", rijec);
	return 0;
}
