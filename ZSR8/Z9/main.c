#include <stdio.h>
#include <stdlib.h>

int zamijeni_podniz(int *p1, int *p2, const int *q1, const int *q2, const int *r1, const int *r2)
{
	int brojac1 = 0, brojac2 = 0, brojac3 = 0;
	int *pomocni1;
	const int *pomocni2, *pomocni3;

	pomocni1 = p1;
	pomocni2 = q1;
	pomocni3 = r1;

	while(p1 != p2) {
		brojac1++;
		p1++;
	}

	p1 = pomocni1;

	while(q1 != q2) {
		brojac2++;
		q1++;
	}

	q1 = pomocni2;

	while(r1 != r2) {
		brojac3++;
		r1++;
	}

	r1 = pomocni3;

	int brojacIstih = 0, indeks = 0, brojacIzbacivanja = 0, treciBrojac = 0, pomocni = 0;

	for(int i = 0; i < brojac1; i++) {
		if(p1[i] == *q1) {
			brojacIstih++;
			q1++;
			if(brojacIstih == 1) indeks = i;
			if(brojacIstih == brojac2) {
				q1 = pomocni2;
				if(brojac2 == brojac3) { // kada drugi i treci niz imaju isti broj elemenata ide ovaj slucaj!!!
					for(int j = indeks; j < indeks + brojac2; j++) {
						int s = 0;
						p1[j] = r1[s];
						s++;
					}
				} else if(brojac2 > brojac3) { // kada drugi niz ima vise elemenata od treceg ide ovaj slucaj!!!
					brojacIzbacivanja++;
					brojacIzbacivanja *= brojac2;
					brojacIzbacivanja -= brojac3;
					brojacIzbacivanja = -abs(brojacIzbacivanja);
					for(int j = indeks; j < indeks + brojac3; j++) {
						int s = 0;
						p1[j] = r1[s];
						s++;
					}
					for(int j = indeks + brojac3; j < indeks + brojac2; j++) {
						treciBrojac++;
						if(treciBrojac <= brojac2 - brojac3) {
							for(int k = j; k < brojac1 - 1; k++) {
								p1[k] = p1[k + 1];
							}
							brojac1--;
							j--;
						}
					}
					treciBrojac = 0;
					i = 0;
				} else if(brojac2 < brojac3) {
					brojacIzbacivanja += brojac3 - brojac2;
					for(int j = indeks + brojac2; j < indeks + brojac3; j++) {
						treciBrojac++;
						if(treciBrojac <= brojac3 - brojac2) {
							for(int k = brojac1 + 1; k >= j; k--) {
								pomocni = p1[k];
								p1[k] = p1[k + 1];
								p1[k + 1] = pomocni;

								//	for(int k = j; k < brojac1 - 1; k++) {
								//if(k == j) {
								// pomocni = p1[k];
								// p1[k] = r1[s];
								//}
							}
							brojac1--;
							j--;
						}
					}
					treciBrojac = 0;
					for(int j = indeks; j < indeks + brojac3; j++) {
						int s = 0;
						p1[j] = r1[s];
						s++;
					}
				}
			}
		} else {
			if(brojacIstih > 0) {
				i--;
				q1 = pomocni2;
				indeks = 0;
				brojacIstih = 0;
			}
		}
	}
	//printf("%d \n", brojacIzbacivanja);
	if(brojac2 == brojac3) return 0;
	else if(brojac2 > brojac3) return brojacIzbacivanja;
	return brojacIzbacivanja;
}
int main()
{
	int niz1[15]= {1,1,2,3,2,1,2,3,3,1};
	int niz2[3]= {1,2,3};
	int niz3[4]= {9,9,9,9};
	int k = zamijeni_podniz(niz1, niz1+10, niz2, niz2+3, niz3,niz3+4);
	int i;
	for(i=0; i<10+k; i++) printf("%d ",niz1[i]);
	return 0;
}
