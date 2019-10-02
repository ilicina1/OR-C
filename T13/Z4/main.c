#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char prezime[20];
    char ime[15];
    int broj_bodova1;
    int broj_bodova2;
};

struct StudentB {
    char prezime[20];
    char ime[15];
    int broj_bodova_ukupno;
};

int main()
{
    struct Student studenti[300], tmp;
    FILE *ulaz, *izlaz;
    int i,j,vel, max;

    if ((ulaz = fopen("ispit.txt", "r") )==NULL ) {
        printf("Greska pri otvaranju datoteke ispit.txt");
        exit(1);
    }

    if ((izlaz = fopen("usmeni.dat", "wb") )==NULL ) { //izmjena
        printf("Greska pri otvaranju datoteke usmeni.dat");
        exit(2);
    }

    i=0;
    while ( fscanf(ulaz,"%20s%15s%2d %2d\n", studenti[i].prezime, studenti[i].ime,
                   &studenti[i].broj_bodova1, &studenti[i].broj_bodova2) == 4 && i <100 ) i++;
    vel = i;

    for (i=0; i<vel; i++) {
        max = i;
        for(j=i+1; j<vel; j++) {
            if ((studenti[j].broj_bodova1 + studenti[j].broj_bodova2) >
                    (studenti[max].broj_bodova1 + studenti[max].broj_bodova2) ) //izmjena
                max=j;
        }
        tmp = studenti[i];
        studenti[i] = studenti[max];
        studenti[max] = tmp;
    }

    struct StudentB idu_na_usmeni[300]; //novi niz

    int br_u=0;
    for ( i=0; i<vel; i++) {
        if( (studenti[i].broj_bodova1 >=10) && (studenti[i].broj_bodova2 >=10) ) {
            strcpy(idu_na_usmeni[br_u].prezime, studenti[i].prezime);
            strcpy(idu_na_usmeni[br_u].ime, studenti[i].ime);
            idu_na_usmeni[br_u].broj_bodova_ukupno = studenti[i].broj_bodova1 + studenti[i].broj_bodova2;
            br_u++;
        }
    }

    int zapisano = fwrite(idu_na_usmeni, sizeof(struct StudentB), br_u, izlaz);
    if (ferror(izlaz) ) {
        printf("Greska prilikom pisanja datoteke.\n");
        printf("Zapisano je samo %d osoba\n", zapisano);
    }

    printf("\nIzlazna datoteka usmeni.dat je kreirana\n");
    fclose(ulaz);
    fclose(izlaz);
    return 0;
}
 