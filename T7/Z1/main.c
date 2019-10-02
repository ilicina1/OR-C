#include <stdio.h>
void crtaj (int duzina)
{
	for (int i=1; i<=duzina; i++) {
		printf("*");
	}
}
int main()
{
	int niz[5];
	printf("\n Unesite vrijednosti za grafikon\n");
	for(int i=0; i<5; i++) {
		printf("%d. vrijednost: ", i+1);
		scanf("%d", &niz[i]);
	}
	printf("\n ^\n |");
	for (int i=0; i<5; i++) {
		printf("\n |");
		crtaj(niz[i]);
		printf(" %d", niz[i]);
		printf("\n |");
	}
	printf("-------------------------------------->\n");
	return 0;
}
