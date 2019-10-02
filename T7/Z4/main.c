#include<stdio.h>

int obrnut(int x)
{

	int r, obrnut = 0;

	while (x > 0) {
		r = x % 10;
		obrnut = obrnut * 10 + r;
		x = x / 10;
	}
	return obrnut;
}

int main()
{

	int x, obrnutBroj = 0;

	scanf("%d", &x);

	obrnutBroj = obrnut(x);

	printf("%d", obrnutBroj);

	return 0;
}
