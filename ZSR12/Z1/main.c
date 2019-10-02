#include <stdio.h>

int main()
{
	int n = 0;
	printf("Unesite broj: ");
	scanf("%d", &n);
	if(n < 1) {
		printf("Pogresan unos");
		return 0;
	}
	
	FILE *ulaz = fopen("input.txt", "r");

	char znak, prosli;
	FILE *izlaz = fopen("output.txt", "w");
	int brojac = 1;
	while((znak = fgetc(ulaz)) != EOF) {   
		if(znak == prosli) {
			brojac++;
		} else if((znak != prosli && brojac >= n)) {
			for(int i = 0; i < brojac; i++) {
				fprintf(izlaz, "%c", prosli);
			}
			brojac = 1;
		} else {
			brojac = 1;
		}
		prosli = znak;
	}

	if(znak == EOF && brojac >= n) {
		for(int i = 0; i < brojac; i++) {
			fprintf(izlaz, "%c", prosli);
		}
	}
	fclose(ulaz);
	fclose(izlaz);
	return 0;
}
