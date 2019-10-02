#include <stdio.h>

#define GODINA 2015

int main()
{
	printf("Unesite godinu rodjenja osobe: ");
	int godinaRodjenja;
	scanf("%d", &godinaRodjenja);
	if(godinaRodjenja > 2015) {
		printf("Neispravna godina rodjenja!");
		return 0;
	}
	printf("Unesite spol osobe (m/M ili z/Z): ");
	getchar();
	char c;
	scanf("%c", &c);
	if(c != 'm' && c != 'M' && c != 'z' && c != 'Z') {
		printf("Pogresan unos spola osobe!");
		return 0;
	}
	int brojGodina;
	brojGodina = GODINA - godinaRodjenja;
	if(brojGodina < 6 && (c == 'm' || c == 'M')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'prije skole', musko je.", brojGodina);
	} else if(brojGodina >= 6 && brojGodina < 14 && (c == 'm' || c == 'M')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'osnovna skola', musko je.", brojGodina);
	} else if(brojGodina >= 14 && brojGodina < 18 && (c == 'm' || c == 'M')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'srednja skola', musko je.", brojGodina);
	} else if(brojGodina >= 18 && brojGodina <= 23 && (c == 'm' || c == 'M')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'fakultet', musko je.", brojGodina);
	} else if(brojGodina > 23 && (c == 'm' || c == 'M')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'ostalo', musko je.", brojGodina);
	} else if(brojGodina < 6 && (c == 'z' || c == 'Z')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'prije skole', zensko je.", brojGodina);
	} else if(brojGodina >= 6 && brojGodina < 14 && (c == 'z' || c == 'Z')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'osnovna skola', zensko je.", brojGodina);
	} else if(brojGodina >= 14 && brojGodina < 18 && (c == 'z' || c == 'Z')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'srednja skola', zensko je.", brojGodina);
	} else if(brojGodina >= 18 && brojGodina <= 23 && (c == 'z' || c == 'Z')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'fakultet', zensko je.", brojGodina);
	} else if(brojGodina > 23 && (c == 'z' || c == 'Z')) {
		printf("Osoba ima %d godina/e/u, klasificirana je u kategoriju: 'ostalo', zensko je.", brojGodina);
	}
	return 0;
}
