#include <stdio.h>

struct Kompleksni {
    double Re, Im;
};

int brojParova(struct Kompleksni *k, int velicina)
{
    int brojac = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if((k[i].Im * -1) == k[j].Im && k[i].Re == k[j].Re) {
                brojac++;
                break;
            }
        }
    }

    return brojac;
}

int main()
{
    struct Kompleksni niz[10];
    niz[0].Re = 1;
    niz[0].Im = 2;
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

    int broj = brojParova(niz, 10);

    printf("%d", broj);

}
