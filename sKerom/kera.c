#include <stdio.h>
#include <string.h>
struct Datum {
    int dan;
    int mjesec;
    int godina;
};

struct Student {
    char ime[20];
    char prezime[20];
    struct Datum datumRodjenja;
};

struct Parovi {
    struct Student studenti[20];
};

struct Student *istiStudenti(struct Student *s, int n)
{
    //int brojac = 0;
    //struct Parovi niz[100];
    int brojac2 = 0;
    int brojac3 = 0;
    struct Student finalni[10];
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if((s[i].datumRodjenja.dan == s[j].datumRodjenja.dan) && (s[i].datumRodjenja.mjesec == s[j].datumRodjenja.mjesec) && (s[i].datumRodjenja.godina == s[j].datumRodjenja.godina)) {
                if(brojac3 == 0) {
                    strcpy(finalni[brojac2].ime,s[i].ime);
                    strcpy(finalni[brojac2].prezime,s[i].prezime);
                    finalni[brojac2].datumRodjenja.dan = s[i].datumRodjenja.dan;
                    finalni[brojac2].datumRodjenja.mjesec = s[i].datumRodjenja.mjesec;
                    finalni[brojac2].datumRodjenja.godina = s[i].datumRodjenja.godina;
                    brojac3++;
                } else {
                    strcpy(finalni[brojac2].ime,s[j].ime);
                    strcpy(finalni[brojac2].prezime,s[j].prezime);
                    finalni[brojac2].datumRodjenja.dan = s[j].datumRodjenja.dan;
                    finalni[brojac2].datumRodjenja.mjesec = s[j].datumRodjenja.mjesec;
                    finalni[brojac2].datumRodjenja.godina = s[j].datumRodjenja.godina;
                }
                brojac2++;
            }
        }
        brojac3 = 0;
    }
    for(int i = 0; i < 3; i++) {
        printf("%s\n", finalni[i].ime);
    }
    return finalni;
}

int main()
{
    // struct Student s[5];
    // for(int i = 0; i < 5; i++) {
    //     printf("Unesite ime: ");
    //     scanf("%s", &s[i].ime);
    //     printf("Unesite prezime: ");
    //     scanf("%s", &s[i].prezime);
    //     printf("Unesite datum rodjenja: ");
    //     scanf("%d %d %d", &s[i].datumRodjenja.dan, &s[i].datumRodjenja.mjesec, &s[i].datumRodjenja.godina);
    // }
    // struct Student *parovi;
    // parovi = istiStudenti(s, 5);
    // //printf("%s", parovi[0].ime);
    // // for(int i = 0; i < 4; i++) {
    // //     printf("%s %s %d.%d.%d.\n", parovi->studenti->ime, parovi->studenti->prezime, parovi->studenti->datumRodjenja.dan, parovi->studenti->datumRodjenja.mjesec, parovi->studenti->datumRodjenja.godina);
    // // }
    int P[4] = {5,6,7,8};
    int Q[4][4] = {5,6,7,8};
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 4; j++) printf("%d ", Q[i][j]);
    //     printf("\n");
    // }
    // printf("%d", *(P+2));
    int q;
    q = Q[0][2] + *(P+2);
    printf("%d", q);
    return 0;
}
