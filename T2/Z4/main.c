#include <stdio.h>

int main() {

	int a, b, c;
	
	printf("Unesite tri broja: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a <50 || a>200 || b<50 || b>200 || c<50 || c>200){
		printf("Svi brojevi nisu iz intervala 50 do 200");
	
	} else if (a == b && b == c){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", a, b, c);
	} else if (a<c && b < c && a < b){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", a, b, c);
	} else if (b<a && c < a && b < c){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", b, c, a);
	} else if (a<b && c < b && c < a){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", c, a, b);
	} else if (a<b && c < b && a < c){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", a, c, b);
	} else if (a<c && b < c && b < a){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", b, a, c);
	} else if (c<a && b < a && c < b){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", c, b, a);
	} else if (a==c && b < c && b < a){
		printf ("\nBrojevi poredani po velicini glase: %d,%d,%d", b, a, c);
	
	} 
	
	
	
	if(a <50 || a>200 || b<50 || b>200 || c<50 || c>200){
		return 0;
	} else if(a != b && a != c && b != c){
		printf ("\nUnesena su 3 razlicita broja");
	} else if (a != b && a == c && c != b){
		printf ("\nUnesena su 2 razlicita broja");
	} else if (a != c && a == b && b != c){
		printf ("\nUnesena su 2 razlicita broja");
	} else if (b != a && b == c && c !=a){
		printf ("\nUnesena su 2 razlicita broja");
	} else if (a == b && a == c && c == b){
		printf ("\nUnesen je 1 razlicit broj");
	}

	
	return 0;
}
