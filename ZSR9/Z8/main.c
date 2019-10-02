#include <stdio.h>
#include <string.h>

int prebroji(const char* str, const char* slova)
{
	int broj_slova = strlen(slova);
	int brojac = 0;
	int duzina_stringa = strlen(str);
	for(int i = 0; i < broj_slova; i++) {
		for(int j = 0; j < duzina_stringa; j++) {
			if(str[j] >= 'A' && str[j] <= 'Z') {
				if(str[j] + 32 == slova[i]) {
					brojac++;
				}
			}
			if(str[j] >= 'a' && str[j] <= 'z') {
				if(str[j] - 32 == slova[i]) {
					brojac++;
				}
			}
			if(str[j] == slova[i]) brojac++;
		}
	}
	return brojac;
}

int main()
{
	printf("%d", prebroji("Aabca","aaa"));
	return 0;
}
