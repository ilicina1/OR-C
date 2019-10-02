#include <stdio.h>

int podniz (const int *p1, const int *p2, const int *q1, const int *q2)
{
	int brojac = 0;
	int *pomocni = q1;

	while(pomocni != q2) {
		brojac++;
		pomocni++;
	}

	pomocni = q1;

	int brojac2 = 0;
	int indeks = 0;
	int indeksic = 0;

	while(p1 != p2) {
		if(*p1 == *pomocni) {
			pomocni++;
			brojac2++;
			if(brojac2 == 1) indeksic = indeks;
			if(brojac2 == brojac) return indeksic;
		} else {
			if(brojac2 != brojac && brojac2 > 0) {
				brojac2 = 0;
				pomocni = q1;
				p1--;
				indeks--;
			}
		}
		indeks++;
		p1++;
	}

	if(brojac2 != brojac) return -1;
	//return indeksic;
}

int main()
{
	int niz1[10]={1,1,2,3,5,6,1,2,3,10};
    int niz2[3]={1,2,3};
    int k = podniz(niz1, niz1+10, niz2, niz2+3);
    printf("%d", k);
	return 0;
}
