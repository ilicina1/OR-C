#include <stdio.h>

struct Tacka {
	int x,y;
};
struct Trougao {
	struct Tacka A,B,C;
};

int izbaci_pravougle(struct Trougao *trougao, int vel)
{
	int brojac = 0;
	for(int i = 0; i < vel; i++) {
		if((trougao[i].A.x != trougao[i].B.x) && (trougao[i].B.x != trougao[i].C.x) && (trougao[i].C.x != trougao[i].A.x)) {
			trougao[i-brojac].A.x=trougao[i].A.x;
			trougao[i-brojac].A.y=trougao[i].A.y;
			trougao[i-brojac].B.x=trougao[i].B.x;
			trougao[i-brojac].B.y=trougao[i].B.y;
			trougao[i-brojac].C.x=trougao[i].C.x;
			trougao[i-brojac].C.y=trougao[i].C.y;
		} else {
			brojac++;
		}
	}
	return vel - brojac;
}

int main()
{
	/* AT1: Osnovni test */
	struct Trougao trouglovi[3];
	int i, vel;
	/* Jeste pravougli */
	trouglovi[0].A.x=0;
	trouglovi[0].A.y=0;
	trouglovi[0].B.x=1;
	trouglovi[0].B.y=0;
	trouglovi[0].C.x=0;
	trouglovi[0].C.y=1;
	/* Jeste pravougli */
	trouglovi[1].A.x=0;
	trouglovi[1].A.y=0;
	trouglovi[1].B.x=1;
	trouglovi[1].B.y=1;
	trouglovi[1].C.x=0;
	trouglovi[1].C.y=1;
	/* Nije pravougli */
	trouglovi[2].A.x=0;
	trouglovi[2].A.y=0;
	trouglovi[2].B.x=1;
	trouglovi[2].B.y=1;
	trouglovi[2].C.x=2;
	trouglovi[2].C.y=1;

	/* Izbacivanje */
	vel = izbaci_pravougle(trouglovi, 3);
	for (i=0; i<vel; i++) {
		printf("Trougao %d: (%d,%d)-(%d,%d)-(%d,%d)\n", i,
		       trouglovi[i].A.x, trouglovi[i].A.y, trouglovi[i].B.x, trouglovi[i].B.y,
		       trouglovi[i].C.x, trouglovi[i].C.y);
	}
	return 0;
}
