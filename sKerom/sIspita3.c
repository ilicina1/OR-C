#include <stdio.h>
#include <math.h>

struct Kompleksni {
    double Re, Im;
};

struct Kompleksni funkcija(struct Kompleksni *k, int velicina)
{
    double max = sqrt((k[0].Re * k[0].Re) + (k[0].Im * k[0].Im));
    double min = sqrt((k[0].Re * k[0].Re) + (k[0].Im * k[0].Im));
    
    int indeksMaksa = 0;
    int indeksMin = 0;
    
    for(int i = 0; i < velicina; i++) {
        if(max < sqrt((k[i].Re * k[i].Re) + (k[i].Im * k[i].Im))) {
            max = sqrt((k[i].Re * k[i].Re) + (k[i].Im * k[i].Im));
            indeksMaksa = i;
        }
        if(min > sqrt((k[i].Re * k[i].Re) + (k[i].Im * k[i].Im))) {
            min = sqrt((k[i].Re * k[i].Re) + (k[i].Im * k[i].Im));
            indeksMin = i;
        }
    }
    
    struct Kompleksni glavni;
    glavni.Re = k[indeksMaksa].Re + k[indeksMin].Re;
    glavni.Im = k[indeksMaksa].Im + k[indeksMin].Im;
    
    return glavni;
}

int main()
{
    struct Kompleksni niz[10];
    niz[0].Re = 1;
    niz[0].Im = 2;
    niz[1].Re = 1;
    niz[1].Im = 3;
    niz[2].Re = 2;
    niz[2].Im = 1;
    niz[3].Re = 5;
    niz[3].Im = 5;
    niz[4].Re = 3;
    niz[4].Im = 2;
    niz[5].Re = 1;
    niz[5].Im = 4;
    niz[6].Re = 1;
    niz[6].Im = 5;
    niz[7].Re = 1;
    niz[7].Im = 5;
    niz[8].Re = 3;
    niz[8].Im = 2;
    niz[9].Re = 5;
    niz[9].Im = 10;
    
    struct Kompleksni gogo = funkcija(niz, 10);
    printf("(%.0f,%.0f)", gogo.Re, gogo.Im);

}
