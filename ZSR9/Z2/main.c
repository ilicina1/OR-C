#include <stdio.h>

const char* posljednja_rijec(char *s)
{
	int i = 0, indeks = 0, brojacPraznih = 0, indeksKraja = 0;
	for(;;) {
		if(s[i] == ' ') {
			brojacPraznih++;
			indeksKraja = i-1;
		}
		if(i == 0 && ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))) {
			indeks = i;
			brojacPraznih = 0;
		} else if(((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) && s[i-1] == ' ' ) {
			indeks = i;
			brojacPraznih = 0;
		} else if(s[i] == '\0') {
			while(brojacPraznih != 0) {
				for(int k = indeksKraja; k >= indeks; k--) {
					s[k + 1] = s[k];
				}
				brojacPraznih--;
				indeks++;
			}
			break;
		}
		i++;
	}
	int br = 0;
	while(br < indeks) {
		s++;
		br++;
	}
	return s;
}

int main()
{									   	
	char tekst[] = " danas je divan   dan   ";
	printf("'%s'", posljednja_rijec(tekst));
	return 0;
}
