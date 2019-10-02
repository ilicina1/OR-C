#include <stdio.h>
#define PI 3.14

int main()
{
    float R, P, V;
    double S;

    /* Unos poluprecnika sa tastature i izracunavanje */

    printf ("Unesite poluprecnik:");
    scanf ("%f", &R);
    P=(R*R)*PI;
    V=(4/3)*R*R*R*PI;
    S=4*(R*R)*PI;
    

    /* Ispis na monitoru*/
    printf("\n Povrsina kruga sa poluprecnikom %  2f je %.2f", R,P);
    printf("\n Zapremina kugle sa poluprecnikom %2f je %.2f", R,V);
    printf("\n Povrsina lopte sa poluprecnikom %2f je %.2f", R,S);
    return 0;
}
