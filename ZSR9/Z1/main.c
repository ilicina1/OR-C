#include <stdio.h>

const char *posljednja_rijec(const char *s)
{
	int i = 0, indeks = 0;
	for(;;) {
		if(i == 0 && ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))) {
			indeks = i;
		} else if(((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) && s[i-1] == ' ' ) {
			indeks = i;
		} else if(s[i] == '\0'){
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
	printf ("Posljednja rijec: '%s'", posljednja_rijec("Danas    je   divan   dan!"));

	return 0;
}
