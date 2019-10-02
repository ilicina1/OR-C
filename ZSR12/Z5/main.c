#include <stdio.h>

// int analiza(){
// 	FILE *ulaz = fopen("brojevi.dat", "rb");

// }

int main()
{
	FILE* izlaz = fopen("brojevi.dat", "wb");
	int i;
	for (i=0; i<100; i++) {
		fputc(1, izlaz);
		fputc(1, izlaz);
		 fputc(2, izlaz);
		 fputc(2, izlaz);
	}
	fclose(izlaz);
	FILE* ulaz = fopen("brojevi.dat", "rb");
	int znak;
	while((znak = fgetc(ulaz)) != '\0'){
		printf("%d", znak);
	}
	return 0;
}
