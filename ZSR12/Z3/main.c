#include <stdio.h>

int main()
{
    int niz[100];
    int n = 0;
    int brojac = 0;
    
    for(int i = 0; i < 100; i++) {
        scanf("%d", &n);
        if(n == -1) break;  
        niz[i] = n;
        brojac++;
    }

    FILE *dat = fopen("brojevi.bin", "wb");
    
    fwrite(niz, 1, brojac, dat);
    fread(niz, 1, brojac, dat);
    fclose(dat);
    
    return 0;
}
