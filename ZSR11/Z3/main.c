#include <stdio.h>
#include <string.h>

struct Kurs {
	char valuta[5];
	float vrijednost;
};

double razmjena(struct Kurs *niz, int n, char *str, float val)
{
	for(int i = 0; i < n; i++) {
		if(strlen(niz[i].valuta) == strlen(str)) {
			for(int j = 0; j < strlen(str); j++) {
				if(str[j] == niz[i].valuta[j]) {
					if(j == strlen(str) - 1){
						return val*niz[i].vrijednost;
					}
				}
				if(str[j] != niz[i].valuta[j]) {
					break;
				}
			}
		}
	}
	return 0;
}

int main()
{
	struct Kurs niz[4] = {{"ABBB", 1.8}, {"USD", 1.2}, {"AABC", 1.5}, {"USDD",1.28}};
	printf("%g ", razmjena(niz, 3, "AB", 1.4));
	printf("%g ", razmjena(niz, 3, "ABC", 1.22));
	printf("%g ", razmjena(niz, 5, "USD", 1.955830));
	printf("%g ", razmjena(niz, 4, "USDD", 1.955830));
	return 0;
}
