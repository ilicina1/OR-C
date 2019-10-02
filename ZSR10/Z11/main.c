#include <stdio.h>
#include <string.h>

char* izbaci_maxbroj(char* s)
{
	char *poc = s;
	char *vraca = s;
	// char *p = s;
	char *q = s;
	int br_cifara = 0;
	int cifre = 0;
	int max = -99999;
	char *pozicija_najveceg_broja;
	int pozicija = 0;
	int broj,broj_cifara_najveceg_broja;
	int minus = 0;
	int i=0;
	int duzina_stringa = strlen(s);

	int brojac_maksa;
	char tebra[100];
	while(1) {
		if(s[i] == '\0') break;
		broj = 0;
		if(s[i] == '-') {
			minus = 1;
			i++;
		}
		if(s[i] >='0' && s[i] <='9') {
			while(s[i] >='0' && s[i] <='9') { // Trazenje broja
				broj = broj * 10;
				broj += (int)(s[i]-'0');
				br_cifara++;
				i++;
			}

		}

		if(minus == 1) {
			broj = broj * (-1);
			br_cifara++;    // Minus
		}

		if(broj > max) {
			max = broj;
			broj_cifara_najveceg_broja = br_cifara;
			pozicija = i - broj_cifara_najveceg_broja;
			for(int k = 0; k < broj_cifara_najveceg_broja; k++) {
				tebra[k] = q[pozicija + k];
			}
			tebra[broj_cifara_najveceg_broja] = '\0';
		}
		br_cifara = 0;
		minus = 0;
		i++;
	}
	int m = 0;

	int brojac = 0, indeks = -1;
	const char *mum = tebra;
	while(*poc != '\0') {
		const char *p = poc;
		const char *w = tebra;
		while(*p == *w) {
			p++;
			w++;
			if(*w == '\0') {
				indeks = brojac;

				for(int j = 0; j < broj_cifara_najveceg_broja; j++) {
					int brojic = indeks;
					for(int k = 0; k < duzina_stringa - pozicija ; k++) {
						char pom = ' ';
						pom = vraca[brojic];
						vraca[brojic] = vraca[brojic + 1];
						vraca[brojic + 1] = pom;
						brojic++;
					}
				}

			}

		}
		w = mum;
		brojac++;
		poc++;
	}

	return vraca;
}




int main()
{

	char tekst[] = "Broj 123: broj 123 je veci od broja 56 koji je veći od 9 i -999";
	printf("%s", izbaci_maxbroj(tekst));

	return 0;
}
