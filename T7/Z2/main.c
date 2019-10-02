#include <stdio.h>
int faktorijel(int x)
{
	int faktor=1;
	for(int i=1; i<=x; i++) {
		faktor*=i;
	}
	return faktor;
}
int main()
{
	int n;
	float x, sum=0;
	for (int i=0; i<1;) {
		printf("Unesite broj n u intervalu [1, 12]: ");
		scanf("%i", &n);
		n<13 && n>0 ? i++ : 0;
	}
	printf("Unesite realan broj x: ");
	scanf("%f", &x);
	for(int i=1; i<=n; i++) {
		int faktor = faktorijel(i);
		sum = sum+(x/faktor);
	}
	printf("Suma od 1 do %i za x = %.3f je %.3f", n,x,sum);
	return 0;
}
