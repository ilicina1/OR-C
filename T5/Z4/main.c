#include <stdio.h>
#define BROJ_EL 999

int main() {
	
	int niz[BROJ_EL], i, br_pet, br_sedam, br_11;
	
		printf("Unesite brojeve: ");
		
	for(i=0; i!=-1;) {	
		scanf("%d", &i);
		
		if(i==-1) break;
		
		if(i%5==0) {
			br_pet++;
		}
		
		if(i%7==0) {
			br_sedam++;
		}
		
		if(i%7==0) {
			br_11++;
		}
		
	}
	
	printf("\nDjeljivih sa 5: %d", br_pet);
	printf("\nDjeljivih sa 7: %d", br_sedam);
	printf("\nDjeljivih sa 11: %d", br_11);
	
	
	return 0;

}
