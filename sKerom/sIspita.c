#include <stdio.h>

int main()
{
	int matrica[100][100];
	int n = 0;

	printf("Unesite br elem: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j) scanf("%d", &matrica[i][j]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j > i) matrica[i][j] = matrica[i][i] - j + i;
			if(j < i) {
				matrica[i][j] = i - j + matrica[i][i];
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf(" %4d ", matrica[i][j]);
		}
		printf("\n");
	}

	return 0;
}
