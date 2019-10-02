#include <stdio.h>

int main() {
	int broj, cifra, c1, novibroj=0, c2, broj1=0 ,broj2;
	do {
	printf("Unesite broj: ");
	scanf("%d" ,&broj); } 
	while(broj<0);
	do {
	printf("Unesite cifru: ");
	scanf("%d" ,&cifra); }
	while (cifra<0);
	
	do {
		c1=broj%10;
		broj=broj/10;
		if( c1 != cifra){
			novibroj=novibroj*10+c1;
		}
		else
		novibroj=novibroj+0;
	
	} while (broj!=0);
	
	do {
		
		c2=novibroj%10;
		novibroj=novibroj/10;
		broj1=broj1*10+c2;
		
		} while(novibroj!=0);
		
	printf("Nakon izbacivanja broj glasi %d.\n", broj1);
	broj2=broj1*2;
	printf("Broj pomnozen sa dva glasi %d." ,broj2);
	return 0;
	
}
	

