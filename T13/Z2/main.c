#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char prezime[20];
    char ime[15];
    int broj_bodova1;
    int broj_bodova2;
};

int main() {
    struct Student studenti[300], tmp;
    int bod[300];
    FILE *ulaz, *izlaz;
    int i, j, vel, max;

    /* Otvaranje datoteka */
    if ((ulaz = fopen("ispit.txt","r")) == NULL) {
        printf("Greska pri otvaranju datoteke ispit.txt");
        exit(1);
    }

    if ((izlaz = fopen("usmeni.txt","w")) == NULL) {
        fclose(ulaz);
        printf("Greska pri otvaranju datoteke ispit_sortiran.txt");
        exit(1);
    }
    /* Ucitavanje datoteke u niz studenti */
    i=0;
    while (fscanf(ulaz,"%20s%15s%2d%2d\n", studenti[i].prezime, studenti[i].ime, &studenti[i].broj_bodova1, &studenti[i].broj_bodova2) == 4 && i<300){
   		if(studenti[i].broj_bodova1>=10 && studenti[i].broj_bodova2>=10){
    		bod[i]=studenti[i].broj_bodova1+studenti[i].broj_bodova2;
    			i++;
    		//fprintf(izlaz, "%20s%15s%2d\n", studenti[i].prezime, studenti[i].ime, studenti[i].broj_bodova1+studenti[i].broj_bodova2);
    	}
    }
    vel = i;

    /* Sortiranje niza po broju bodova */
    for (i=0; i<vel; i++) {
        max = i;
        for (j=i+1; j<vel; j++)
            if(bod[j]>bod[max]) 
                max = j;
	
        tmp = studenti[i];
        studenti[i] = studenti[max];
        studenti[max] = tmp;
        int g=bod[i];
        bod[i]=bod[max];
        bod[max]=g;
    }
    
    for (i=0; i<vel; i++)
	fprintf(izlaz,"%-15s%-10s%2d\n", studenti[i].prezime, studenti[i].ime, bod[i]);

    printf ("Izlazna datoteka usmeni.txt je kreirana\n");
    fclose(ulaz);
    fclose(izlaz);
 
    return 0;
}
