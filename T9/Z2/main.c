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

int prebroji(char* s, char znak)
{
	int broj = 0;
	while (*s != '\0') {
		if (*s == znak)
			broj++;
		s++;
	}
	return broj;
}

int samoglasnici(char *s)
{
	int brojSamoglasnika = 0;
	char *p = s;
	while(*p != '\n' && *p != '\0') {
		if(*p == 'a' || *p == 'A' || *p == 'e' || *p == 'E' || *p == 'i' || *p == 'I' || *p == 'o' || *p == 'O' || *p == 'u' || *p == 'U')
			brojSamoglasnika++;
		p++;
	}
	return brojSamoglasnika;
}

int main()
{
	char a[80],c,p;
	printf ("\nUnesite jednu rijec do 80 znakova (ENTER za kraj): ");
	unesi(a, 80);
	printf ("\nKoji znak treba prebrojati: ");
	scanf ("%c", &c);
	printf ("\nBroj znakova %c je: %d\n",c,prebroji(a,c));
	printf("\nBroj samoglasnika je: %d\n", samoglasnici(a));
	return 0;
}
