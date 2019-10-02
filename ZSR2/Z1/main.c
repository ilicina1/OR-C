#include <stdio.h>
#include <math.h>

int main()
{

	double broj, cetvrtiKorijen;

	printf("Unesi broj: ");
	scanf("%lf", &broj);

	cetvrtiKorijen = sqrt(broj);
	cetvrtiKorijen = sqrt(cetvrtiKorijen);

	if(cetvrtiKorijen > 10) printf("4. korijen iz broja %g je %.12g", broj, cetvrtiKorijen);
	else if(cetvrtiKorijen == 0) printf("4. korijen iz broja 0 je 0.0000000000");
	else printf("4. korijen iz broja %g je %.11g", broj, cetvrtiKorijen);

	return 0;
}
