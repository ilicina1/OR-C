#include <stdio.h>
#define velicinaNiza 5

int main()
{

    double nizA[velicinaNiza],nizB[velicinaNiza], nizC[velicinaNiza];

    printf("Unesite clanove niza A: ");

    for (int i=0; i<velicinaNiza; i++) {

        scanf("%lf", &nizA[i]);

    }

    printf("Unesite clanove niza B: ");

    for (int i=0; i<velicinaNiza; i++) {

        scanf("%lf", &nizB[i]);


    }
    for (int i=0; i<velicinaNiza; i++) {

        nizC[i]=nizA[i]*2+nizB[i];


    }

    for (int i=0; i<3; i++) {
        switch(i) {
        case 0:
            printf("Niz A glasi:");
            break;
        case 1:
            printf("\nNiz B glasi:");
            break;
        case 2:
            printf("\nNiz C glasi:");
        }

        for (int j=0; j<velicinaNiza; j++) {
            switch(i) {
            case 0:
                printf(" %.2lf", nizA[j]);
                break;
            case 1:
                printf(" %.2lf", nizB[j]);
                break;
            case 2:
                printf(" %.2lf", nizC[j]);
                break;

            }

            j!=velicinaNiza-1 ? printf(",") : 0;

        }

    }
    return 0;
}
