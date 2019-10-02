#include <stdio.h>
#include <string.h>

int pronadji_posljednji(const char *str, const char *trazi)
{
	int brojac = 0, indeks = -1;
	while(*str != '\0') {
		const char *p = str;
		const char *q = trazi;
		while(*p == *q){
			p++;
			q++;
			if(*q == '\0') indeks = brojac;
		}
		brojac++;
		str++;
	}
	return indeks;
}

int main()
{
	const char *n = "Danas je divan dan!";
	printf ("%d", pronadji_posljednji(n, "an"));
	return 0;
}
