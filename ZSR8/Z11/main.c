#include <stdio.h>

int *max_el(int *p1, int *p2)
{
	int i = 0, max = *p1;
	int *pomocni = p1;

	while(p1 != p2) {
		if(*p1 > max) {
			max = *p1;
		}
		p1++;
	}

	p1 = pomocni;

	while(p1 != p2) {
		if(*p1 == max) break;
		i++;
		p1++;
	}

	p1 = pomocni + i;

	return p1;
}

int *min_el(int *p1, int *p2)
{
	int i = 0, min = *p1;
	int *pomocni = p1;

	while(p1 != p2) {
		if(*p1 < min) {
			min = *p1;
		}
		p1++;
	}

	p1 = pomocni;

	while(p1 != p2) {
		if(*p1 == min) break;
		i++;
		p1++;
	}

	p1 = pomocni + i;

	return p1;
}

int main()
{
	int niz[7] = {1, 2, 9, 8, 4, 0, 1};
	int *p = max_el(niz, niz + 7);
	int *q = min_el(niz, niz + 7);
	printf("Maksimalni element niza je %d, a minimalni %d.",*p,*q);
	return 0;
}
