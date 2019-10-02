#include <stdio.h>

int pronadji_posljednji(const char *str, const char *trazi)
{
	int brojac = 0, indeks = -1;
	while(*str != '\0') {
		const char *p = str;
		const char *q = trazi;
		if((*p >= 'A' && *p <= 'Z') && (*q >= 'a' && *p <= 'z')) {
			while(*p == *q) {
				p++;
				q++;
				if(*q == '\0') indeks = brojac;
			}
		} else if((*p >= 'a' && *p <= 'z') && (*q >= 'A' && *p <= 'Z')) {
			while(*p == *q) {
				p++;
				q++;
				if(*q == '\0') indeks = brojac;
			}

		} else {
			while(*p == *q) {
				p++;
				q++;
				if(*q == '\0') indeks = brojac;
			}
		}
		brojac++;
		str++;
	}
	return indeks;
}

int main()
{
	//const char *n = "Danas je diVan dAn!";
	printf ("%d", pronadji_posljednji("DAnAs jE dIvAn DAN!", "DAN"));
	return 0;
}
