#include <stdio.h>
#include <string.h>

void izbaci_tekst(char* str, const char* tekst)
{
	int duzina_teksta = strlen(tekst);
	int duzina_str = strlen(str);
	int brojac = 0, indeks = -1;
	const char *pomocni = str;
	while(*str != '\0') {
		const char *p = str;
		const char *q = tekst;
		while(*p == *q) {
			p++;
			q++;
			if(*q == '\0') {
				indeks = brojac;
				//printf("%d", indeks);
				for(int i = 0; i < duzina_teksta; i++) {
					for(int j = indeks - 1; j < duzina_str - indeks - 1; j++) {
						//printf("%c\n", str[j]);
						str[j] = str[j+1];
					}
				}
				str[duzina_str-duzina_teksta-1] = '\0';
			}
		}
		brojac++;
		str++;
	}
	while(*pomocni != '\0') {
		printf("%c", *pomocni);
		pomocni++;
	}
//	return pomocni;
}

int main()
{
	char tekst[] = "danas je divan dan!";
	char tek[] = "je";
	izbaci_tekst(tekst, tek);
	//printf ("%s", izbaci_tekst(tekst, tek));
	return 0;
}
