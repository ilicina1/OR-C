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

char* rot13(char *s)
{
	int d=0;


	while(*s!='\0') {
		if((*s>='A' && *s<='M') || (*s>='a' && *s<='m')) {
			*s+=13;
		} else if((*s>'m' && *s<='z') || (*s>'M' && *s<='Z')) {
			*s-=13;
		}
		s++;
		d++;
	}
	return (s-d);
}


int main()
{
	char tekst[100];
	printf("Unesite tekst: ");
	unesi(tekst, 100);
	rot13(tekst);
	printf("Nakon kodiranja: %s",tekst);



}
