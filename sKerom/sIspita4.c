#include <stdio.h>
#include <math.h>

struct Kompleksni {
    double Re, Im;
};

int funkcija(struct Kompleksni *k, int a, int velicina)
{
    for(int i = 0; i < velicina; i++) {
        if(sqrt(k[i].Re * k[i].Re + k[i].Im * k[i].Im) < a) {
            k[i].Re = k[velicina - 1].Re;
            k[i].Im = k[velicina - 1].Im;
            velicina--;
            i--;
        }
    }
    return velicina;
}

int main()
{
    struct Kompleksni niz[10];
    niz[0].Re = 2;
    niz[0].Im = 4;
    niz[1].Re = 1;
    niz[1].Im = 2;
    niz[2].Re = 2;
    niz[2].Im = 1;
    niz[3].Re = 5;
    niz[3].Im = 5;
    niz[4].Re = 3;
    niz[4].Im = 22;
    niz[5].Re = 1;
    niz[5].Im = -2;
    niz[6].Re = 1;
    niz[6].Im = -5;
    niz[7].Re = 1;
    niz[7].Im = -1;
    niz[8].Re = 3;
    niz[8].Im = 22;
    niz[9].Re = 3;
    niz[9].Im = -22;

    int vel = funkcija(niz, 5, 10);
    
    for(int i = 0; i < vel; i++){
        printf("(%.2f,%.2f)\n", niz[i].Re, niz[i].Im);
    }

}
