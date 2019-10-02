#include <stdio.h>

int izbaci_podniz(int *p1, int *p2, int *q1, int *q2)
{
	int brojac = 0;
	int *pomocni = q1;

	while(pomocni != q2) {
		brojac++;
		pomocni++;
	}

	int *pomocni2 = p1;
	int brojacic = 0;

	while(pomocni2 != p2) {
		brojacic++;
		pomocni2++;
	}

	pomocni = q1;

	int brojac2 = 0;
	int indeksic = 0;
	int treciBrojac = 0;
	int glavniBrojac = 0;
	int pomocniBrojac = brojacic;

	for(int i = 0; i < pomocniBrojac; i++) {
		//printf("%d -- %d \n", *pomocni, p1[i]);
		if(p1[i] == *pomocni) {
			pomocni++;
			brojac2++;
			if(brojac2 == 1) indeksic = i;
			if(brojac2 == brojac) {
				//i = 0;
				glavniBrojac++;
				//	pomocniBrojac -= 3;
				//	brojac2 = 0;
				pomocni = q1;
				for(int j = indeksic; j < brojacic; j++) {
					treciBrojac++;
					if(treciBrojac < brojac + 1) {
						for(int k = j; k < brojacic - 1; k++) {
							p1[k] = p1[k + 1];
						}
						brojacic--;
						j--;
					}
				}
				treciBrojac = 0;
				i -= brojac+1;
			}
		} else {
			if(brojac2 != brojac && brojac2 > 0) {
				//	printf("--%d \n", indeks);
				brojac2 = 0;
				pomocni = q1;
				indeksic = 0;
				i--;
			}
		}

		//p1++;
	}

	int vraca = 0;
	if(glavniBrojac == 0) return vraca;
	else return glavniBrojac * brojac;
}

int main()
{
	// int niz1[12]= {1,1,2,3,2,1,2,3,3,1,2,3};
	// int niz2[1]= {3};
	// int k = izbaci_podniz(niz1, niz1+12, niz2, niz2+1);
	// int i;
	// for(i=0; i<12-k; i++) printf("%d ",niz1[i]);
	// printf("\n %d", k);
	int niz1[10]= {1,1,2,3,5,6,1,2,3,10};
	int niz2[3]= {1,2,3};
	int k = izbaci_podniz(niz1, niz1+10, niz2, niz2+3);
	//printf("%d",k);
	int i;
	for(i=0; i<10-k; i++) printf("%d ",niz1[i]);
	return 0;
}
