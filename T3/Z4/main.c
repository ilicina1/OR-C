#include <stdio.h>

int main() {

	int n, i, j;
	
	printf("Unesite broj n: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		if (i%2==1){
			printf(" * ");
		} else {
			printf("* ");
		}
			for(j=2; j<=n; j++){
				printf("* ");
			}
		printf("\n");
	}
	return 0;
}
