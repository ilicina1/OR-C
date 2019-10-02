#include <stdio.h>

int main() {
	
	double a,b,c,x,f;
	printf("Unesite koeficijente a, b i c: ");
	scanf("%lf %lf %lf", &a,&b,&c);
	
	if( (a<=-10 || a>=10) || (b<=-10 || b>=10) || (c<=-10 || c>=10) )
	{
		printf("Koeficijenti a, b i c nisu u zadanom rasponu.");
	}
	
	else
	
	{
		printf("Unesite tacku x: ");
		scanf("%lf", &x);     
		f=2*a*x+b;
		printf("Prva derivacija u tacki x=%g je %g.", x,f);
	}
	
return 0;

}