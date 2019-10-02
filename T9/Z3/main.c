#include <stdio.h>

void unesi(char niz[], int velicina)
{
	char znak = getchar();
	if (znak == '\n') znak=getchar();
	int i = 0;
	while (i < velicina-1 && znak != '\n') {
		niz[i] = znak;
		i++;
		znak = getchar();
	}
	niz[i]='\0';
}

char *kapitaliziraj(char *s)
{
	char *p = s;
	int jeNovaRijec = 1;

	while(*s != '\n' && *s != '\0') {
		if(jeNovaRijec == 1) {
			if(*s>= 'a' && *s <= 'z') {
				*s += 'A' - 'a';
			}
			jeNovaRijec = 0;
		} else if(*s == ' ') {
			jeNovaRijec = 1;
		}
		s++;
	}
	return p;
}

int main()
{
	char a[80];
	printf("Unesite neki tekst: ");
	unesi(a, 80);

	kapitaliziraj(a);

	printf("%s", a);

	return 0;
}
