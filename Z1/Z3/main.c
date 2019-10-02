#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define EPSILON 0.0001

int main()
{

	srand(0);

	int slucajna, i, izbor, nako=0;
	double zlato_cijena=1200.0, srebro_cijena=15.0, nafta_cijena=70.0, zlato_p=0, srebro_p=0, nafta_p=0, zlato_koef=0, srebro_koef=0, nafta_koef=0, zlato_vrijednost=0, srebro_vrijednost=0, nafta_vrijednost=0, novac=100000, ukupno=0, kolicina=0;


	while(nako!=1) {

		for(i=0; i<5; i++) {

			slucajna=(rand() % 2) * 2-1;
			zlato_p += 0.1 * slucajna;
			zlato_cijena += zlato_cijena * zlato_p * 0.01;

			if(fabs(zlato_p) < EPSILON) {
				zlato_p = 0;
			}

			slucajna=(rand() % 2) * 2-1;
			srebro_p += 0.1 * slucajna;
			srebro_cijena += srebro_cijena * srebro_p * 0.01;

			if(fabs(srebro_p) < EPSILON) {
				srebro_p = 0;
			}

			slucajna=(rand() % 2) * 2-1;
			nafta_p += 0.1 * slucajna;
			nafta_cijena += nafta_cijena * nafta_p * 0.01;

			if(fabs(nafta_p) < EPSILON) {
				nafta_p = 0;
			}

			//Ponedjeljak
			if(i == 0) {
				printf("\nPON: Zlato $%.2lf (%+.1lf) Srebro $%.2lf (%+.1f) Nafta $%.2lf (%+.1lf)\n", zlato_cijena, zlato_p, srebro_cijena, srebro_p, nafta_cijena, nafta_p);
			}

			//Utorak
			else if(i == 1) {
				printf("UTO: Zlato $%.2lf (%+.1lf) Srebro $%.2lf (%+.1lf) Nafta $%.2lf (%+.1lf)\n", zlato_cijena, zlato_p, srebro_cijena, srebro_p, nafta_cijena, nafta_p);
			}

			//Srijeda
			else if(i == 2) {
				printf("SRI: Zlato $%.2lf (%+.1lf) Srebro $%.2lf (%+.1lf) Nafta $%.2lf (%+.1lf)\n", zlato_cijena, zlato_p, srebro_cijena, srebro_p, nafta_cijena, nafta_p);
			}

			//Cetvrtak
			else if(i == 3) {
				printf("CET: Zlato $%.2lf (%+.1lf) Srebro $%.2lf (%+.1lf) Nafta $%.2lf (%+.1lf)\n", zlato_cijena, zlato_p, srebro_cijena, srebro_p, nafta_cijena, nafta_p);
			}

			//Petak
			else if(i == 4) {
				printf("PET: Zlato $%.2lf (%+.1lf) Srebro $%.2lf (%+.1lf) Nafta $%.2lf (%+.1lf)\n", zlato_cijena, zlato_p, srebro_cijena, srebro_p, nafta_cijena, nafta_p);
			}

		}
		printf("\n");


		do {
			zlato_vrijednost = zlato_koef * zlato_cijena;
			srebro_vrijednost = srebro_koef * srebro_cijena;
			nafta_vrijednost = nafta_koef * nafta_cijena;
			ukupno = zlato_vrijednost + srebro_vrijednost + nafta_vrijednost + novac;

			printf("\nImate:\n");
			printf("Zlata: %g ($%.2f) Srebra: %g ($%.2f) Nafte: %g ($%.2f) Novca: $%.2f\n", zlato_koef, zlato_vrijednost, srebro_koef, srebro_vrijednost, nafta_koef, nafta_vrijednost, novac);
			printf("UKUPNO: $%.2f ($%+.2f)\n", ukupno, ukupno-100000);

			printf("\n");

			printf("Unesite izbor (1 - Kupi, 2 - Prodaj, 3 - Sljedeca sedmica, 0 - Kraj igre): ");
			scanf("%d", &izbor);



			if(izbor == 3) {
				break;
			} else if(izbor == 0) {
				nako = 0;-č
				return 0;

				//Kupujem
			} else if(izbor == 1) {
				printf("Sta kupujete (1 - Zlato, 2 - Srebro, 3 - Naftu): ");
				scanf("%d", &izbor);

				if(izbor == 1) {
					printf("Koliko? \n");
					scanf("%lf", &kolicina);

					if((kolicina * zlato_cijena) > novac)	{
						printf("Nemate toliko novca!\n");
					} else {
						zlato_koef = zlato_koef + kolicina;
						novac = novac  -kolicina * zlato_cijena;
					}
				} else if(izbor == 2) {
					printf("Koliko? \n");
					scanf("%lf", &kolicina);

					if((kolicina * srebro_cijena) > novac)	{
						printf("Nemate toliko novca!\n");
					} else {
						srebro_koef = srebro_koef + kolicina;
						novac = novac - kolicina * srebro_cijena;
					}
				} else if(izbor == 3) {
					printf("Koliko? ");
					scanf("%lf", &kolicina);

					if((kolicina * nafta_cijena) > novac)	{
						printf("Nemate toliko novca!\n");
					} else {
						nafta_koef = nafta_koef + kolicina;
						novac = novac - kolicina * nafta_cijena;
					}
				}

				//Prodajem
			} else if(izbor == 2) {
				printf("Sta prodajete (1 - Zlato, 2 - Srebro, 3 - Naftu): ");
				scanf("%d", &izbor);

				if(izbor == 1) {
					printf("Koliko? \n");
					scanf("%lf", &kolicina);

					if((zlato_koef-kolicina)<0)	{
						printf("Nemate toliko zlata!\n");
					} else {
						zlato_koef = zlato_koef - kolicina;
						novac = novac + kolicina * zlato_cijena;
					}
				} else if(izbor == 2) {
					printf("Koliko? \n");
					scanf("%lf", &kolicina);

					if((srebro_koef-kolicina)<0)	{
						printf("Nemate toliko srebra!\n");
					} else {
						srebro_koef = srebro_koef - kolicina;
						novac = novac + kolicina * srebro_cijena;
					}
				} else if(izbor == 3) {
					printf("Koliko? \n");
					scanf("%lf", &kolicina);

					if((nafta_koef-kolicina)<0)	{
						printf("Nemate toliko nafte!\n");
					} else {
						nafta_koef = nafta_koef - kolicina;
						novac = novac + kolicina * nafta_cijena;
					}
				}
			} else {
				printf("Pogresan izbor!\n");
				printf("\n");
			}
		} while (nako != 1);
	}
	return 0;
}
