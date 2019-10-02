#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */
int main()
{
	FILE *ulaz;
	char znak, ime[20];
	int broj_redova=0, broj_rijeci=0, broj_znakova=0, razmak=1, broj_samoglasnika = 0, broj_velikih_slova = 0, broj_cifara = 0;

	printf ("Unesite ime datoteke: ");
	scanf ("%s", ime);
	ulaz = fopen(ime, "r");
	if (ulaz == NULL) {
		printf ("Pogreska kod otvaranja datoteke %s!\n\n", ime);
		return 1;
	}
	while ((znak=fgetc(ulaz)) != EOF) {
		/* Ako je znak novi red, povecaj broj linija za jedan */
		if (znak=='\n')
			++broj_redova;

		/* Da li je znak razmak? */
		if (znak==' ' || znak=='\n' || znak=='\t')
			razmak=1;
		else {
			++broj_znakova;
			/* Ako je prethodni znak bio razmak a ovaj nije,
			   povecavamo broj rijeci za 1 */
			if (razmak==1) ++broj_rijeci;
			razmak=0;
		}
		if(znak == 'A' || znak == 'a' || znak == 'E' || znak == 'e' || znak == 'I' || znak == 'i' || znak == 'O' || znak == 'o' || znak == 'U' || znak == 'u') broj_samoglasnika++;
		if(znak >= 65 && znak <= 90) broj_velikih_slova++;
		if(znak >= 48 && znak <= 57) broj_cifara++;
	}
	if (broj_znakova != 0) broj_redova++;
	printf ("Broj redova: %d\nBroj rijeci: %d\nBroj znakova: %d\nBroj samoglasnika: %d\nBroj velikih slova: %d\nBroj cifara: %d",
	        broj_redova, broj_rijeci, broj_znakova, broj_samoglasnika, broj_velikih_slova, broj_cifara);
	fclose (ulaz);
	return 0;
}
