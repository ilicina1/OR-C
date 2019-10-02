#include <stdio.h>

int main() {
	printf("Unesite cijeli broj: ");
	int broj;
	scanf("%d", &broj);
	if(((broj >= -3 && broj < 11) || (broj > 5 && broj < 15) || (broj > 17 && broj <= 31) || (broj > 19 && broj < 33)) && ((broj > -1 && broj <= 1) || (broj >= 2 && broj <= 12) || (broj >= 5 && broj <= 56) || (broj >= 9 && broj < 10)) && (!(broj > -11 && broj < -6) || !(broj > 15 && broj <= 16) || !(broj >= 6 && broj <= 9)))
		printf("Nalazi");
	else printf("Ne nalazi");
	return 0;
}
