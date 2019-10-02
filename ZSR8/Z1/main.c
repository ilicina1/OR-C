#include <stdio.h>

void ispisi(int niz[], int n)
{
	printf("{");
	for(int i = 0; i < n; i++) {
		if(i == n - 1) printf("%d}", niz[i]);
		else printf("%d, ", niz[i]);
	}
	if(n == 0) printf("}");
}

int main()
{
	int niz1[] = {1, 3, 2};
	int niz2[10] = {0, 3, 2, 2, 2, 4, 6, 1, 9, 10};
	ispisi(niz1, 3);
	printf("\n");
	ispisi(niz2, 10);

	return 0;
}
