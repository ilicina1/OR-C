#include <stdio.h>

char *izbaci_viska_razmake(char *str)
{
    int i = 0, indeks = 0, broj_praznih = 0;
    for(;;) {
        if(i != 0 && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) && str[i-1] == ' ') {
            indeks = i;
            if(broj_praznih > 1) {
                for(int j = 0; j < broj_praznih - 1; j++) {

                }
            }
        }
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            broj_praznih = 0;
        }
        if(str[i] == ' ' && ((str[i-1] >= 'A' && str[i-1] <= 'Z') || (str[i-1] >= 'a' && str[i-1] <= 'z'))) {
            broj_praznih++;
        } else if(str[i] == ' ' && broj_praznih > 0) {
            broj_praznih++;
        } else {
            broj_praznih = 0;
        }
        i++;
    }
}

int main()
{
    char tekst[] = "        volim      OR      ";
    printf("'%s'", izbaci_viska_razmake(tekst));
    return 0;
}
