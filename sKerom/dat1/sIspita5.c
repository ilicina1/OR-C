#include <stdio.h>
#include <stdlib.h>

double funkcija(double *niz, int n)
{
    double min = niz[0];
    double max = niz[0];
    for(int i = 0; i < n; i++) {
        if(min > niz[i]) min = niz[i];
        if(max < niz[i]) max = niz[i];
    }
    return max - min;
}

int main()
{
    FILE *ulaz;
    char ime[20];
    printf("Unesite ime datoteke: ");
    scanf("%s", &ime);
    ulaz = fopen(ime, "r");
    if(ulaz == NULL) {
        printf("Datoteka ne postoji!");
        return 1;
    }
    char znak;
    double niz[1000];
    double broj = 0;
    int i = 0;
    int m = 0;
    double dec = 0;
    while((znak = fgetc(ulaz)) != EOF) {
        if(znak == ',') {
            niz[i] = broj;
            broj = 0;
            m = 0;
            i++;
        }
        if(znak == '.') m = 1;
        if((znak >= 48 && znak <= 57) && broj > 0 && m < 1) { // za cijele brojeve nakon prve cifre
            broj *= 10;
            double pom = 0;
            pom = znak - '0';
            broj += pom;
            niz[i] = broj;
        }
        if((znak >= 48 && znak <= 57) && broj > 0 && m == 2) { // za decimalne
            double poma = 0;
            poma = znak - '0';
            poma /= 10;
            dec += poma;
            broj += dec;
            niz[i] = broj;
        }
        if((znak >= 48 && znak <= 57) && broj > 0 && m == 1) { // za decimalne
            dec = znak - '0';
            dec /= 10;
            broj += dec;
            niz[i] = broj;
            m = 2;
        }
        if(znak >= 48 && znak <= 57 && broj == 0) { // za cijele brojeve prva cifra
            broj = znak - '0';
            niz[i] = broj;
        }
    }
    double rezultat = funkcija(niz, 9);
    FILE *izlaz;
    izlaz = fopen("statistika.txt", "w");
    fprintf(izlaz, "%f", rezultat);
    fclose(ulaz);
    fclose(izlaz);
    return 0;
}
