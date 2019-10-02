#include <stdio.h>

int daj_sljedeci_broj(int x)
{
	static int sredina = 50;
	static int dg = 0;
	static int gg = 100;

	if(x == -1) {
		gg = sredina;
		sredina = (dg + gg) / 2;
	} else if (x == 1) {
		dg = sredina;
		sredina = (dg + gg) / 2;
	}
	
	return sredina;
}

int main()
{
	char a,b;
	int sredina=50;

	printf("Zamislite neki broj...\n");

	while(1) {

		printf("Da li je taj broj %d? ", sredina);
		scanf(" %c%c", &a, &b);

		if(a == 'M') {
			sredina = daj_sljedeci_broj(-1);
		} else if(a == 'V') {
			sredina = daj_sljedeci_broj(1);
		} else if(a != 'M' && a != 'V' && a != 'J') {
			printf("Pogresan unos, probajte ponovo.\n");
		} else if(a == 'J') {
			printf("Pogodio sam!");
			break;
		}
	}
	return 0;
}
