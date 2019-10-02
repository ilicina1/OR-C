#include <stdio.h>

int obrniBroj(int n)
{
	int modul = 0;
	int broj = 0;
	int brojac = 1;
	if(n < 10 && n > 0) return n;
	while(n != 0) {
		modul = n % 10;
		n /= 10;
		if(brojac == 1) broj += modul * 10;
		else if(brojac == 2) broj += modul;
		else broj = (broj * 10) + modul;
		brojac++;
	}
	return broj;
}

void obrni_cifre(int *pocetak, int n)
{
	for(int i = 0; i < n; i++) {
		int a = 0;
		a = obrniBroj(*pocetak);
		*pocetak = a;
		pocetak++;
	}
}

int main()
{
	int niz1 [5] = {1,2,3,4,5};
	obrni_cifre(niz1, 5);
	int i;
	for(i=0; i<5; i++) printf("%d ", niz1[i]);
	// int a = 321;
	// int b = obrniBroj(a);
	// printf("%d", b);
	return 0;
}
