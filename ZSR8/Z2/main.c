#include <stdio.h>

void udvostruci(int p[], int n){
	for(int i = 0; i < n; i++){
		p[i] = p[i] + p[i];
	}
}

int main() {
	int niz[5] = {10, -22, -2, 21, 1};
	udvostruci(niz, 5);
	for(int i = 0; i < 5; i++){
		printf("%d \n", niz[i]);
	}
	return 0;
}
