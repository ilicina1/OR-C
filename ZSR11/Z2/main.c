#include <stdio.h>

struct Tacka {
	double x,y;
};

struct Pravougaonik {
	struct Tacka dolje_lijevo;
	struct Tacka gore_desno;
};

struct Pravougaonik min_pravougaonik(struct Tacka *niz, int vel)
{
	double min_x = niz[0].x;
	double min_y = niz[0].y;
	double max_x = niz[0].x;
	double max_y = niz[0].y;
	for(int i = 0; i < vel; i++) {
		if(min_x > niz[i].x) min_x = niz[i].x;
		if(min_y > niz[i].y) min_y = niz[i].y;
		if(max_x < niz[i].x) max_x = niz[i].x;
		if(max_y < niz[i].y) max_y = niz[i].y;
	}
	struct Pravougaonik p;
	p.dolje_lijevo.x = min_x;
	p.dolje_lijevo.y = min_y;
	p.gore_desno.x = max_x;
	p.gore_desno.y = max_y;
	return p;
}

int main()
{
	printf("Unesite broj tacaka: ");
	int n = 0;
	scanf("%d", &n);
	struct Tacka niz[100];
	for(int i = 0; i < n; i++) {
		printf("Unesite koordinate x i y tacke %d: ", i+1);
		scanf("%lg", &niz[i].x);
		scanf("%lg", &niz[i].y);
	}
	struct Pravougaonik p = min_pravougaonik(niz, n);
	printf("Minimalni pravougaonik za ove tacke ima uglove: \n(%g,%g) - (%g,%g)", p.dolje_lijevo.x, p.dolje_lijevo.y, p.gore_desno.x, p.gore_desno.y);

	return 0;
}
