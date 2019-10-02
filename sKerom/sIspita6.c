#include <stdio.h>
#include <string.h>

void ubaciBroj(char *niz, int broj)
{
    int brojCifara = 0;
    while(broj != 0) {
        broj /= 10;
        brojCifara++;
    }
    char *pom = niz;
    while(*pom != '\0') pom++;
    char *pocetak = niz;
    int duzina = strlen(niz);
    int j = 0;
    int br = 0;
    while(*niz != '\0') {
        if(*niz == ' ') {
            while(br < brojCifara) {
                pom++;
                br++;
            }
            *pom = '\0';
            pom--;
            for(int i = duzina; i > j; i--) {
                *pom = niz[i];
                pom--;
            }
            for(int i = 0; i < 4; i++) {
                niz[j+1] = 's'; 
            }
        }

        niz++;
        j++;
    }
    niz = pocetak;
    //printf("\n %c", *niz);
    //int duzinaStringa = strlen(niz);
    //printf("%d", duzinaStringa);
    //char *p = niz + duzinaStringa;

}

int main()
{
    char niz[50] = "Ovo je neki primjer";
    ubaciBroj(niz, 121);
    for(int i = 0; i < 50; i++) printf("%c", niz[i]);
    //printf("%d", strlen(niz));
    return 0;
}
