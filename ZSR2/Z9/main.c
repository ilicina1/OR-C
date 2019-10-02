#include <stdio.h>

int main() {
	printf("Unesite 10 prirodnih brojeva: ");
	int niz[10];
	for(int i = 0; i < 10; i++) {
		scanf("%d", &niz[i]);
	}
	for(int i = 0; i < 10; i++){
		if(niz[i] % 2 == 0){
			printf("%015d", niz[i]);
			printf("\n");
		} else {
			printf("%d", niz[i]);
			printf("\n");
		}
	}
	// for(int i = 0; i < 10; i++) {
	// 	printf("%d  ", niz[i]);
	// }
	return 0;
}
