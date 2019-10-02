#include <stdio.h>

int main() {
	char c;
	printf("Unesite znak kojim ce broj biti okruzen: ");
	scanf("%c", &c);
	int broj;
	printf("Unesite prirodan broj u intervalu [0, 9]: ");
	scanf("%d", &broj);
	getchar();
	char c;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(i == 2 && j == 1) {
				printf(" ");
			} else if(i == 2 && j == 2) {
				printf("%d", broj);
			} else if(i == 2 && j == 3) {
				printf(" ");
			} else {
				printf("%c", c);
			}
		}
		printf("\n");
	}
	return 0;
}
