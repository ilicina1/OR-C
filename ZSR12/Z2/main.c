#include <stdio.h>

int main()
{
	char x, y;
	FILE *ulaz = fopen("input.txt", "w");
	fputs("OVO JE NEKA DATOTEKA. Dalje idu mala slova.", ulaz);
	fclose(ulaz);
	
	printf("Unesite znakove x i y: ");
	scanf(" %c", &x);
	scanf(" %c", &y);
	
	if(y < x) {
		printf("Pogresan unos");   
		return 0;
	}
	
	ulaz = fopen("input.txt", "r");
	FILE *izlaz = fopen("output.txt", "w");
	
	int znak;
	while((znak = fgetc(ulaz)) != EOF){
		if(znak >= x && znak <= y) fprintf(izlaz, "%c", znak);
	}
	return 0;
}
