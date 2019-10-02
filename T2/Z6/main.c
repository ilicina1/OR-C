#include <stdio.h>
int main() {
    
    double a, b, c, d;
     printf("Unesite brojeve a,b,c,d: ");
     scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        
     if(a<b && b<c && c>b && c<d && d>b && d>a || c<a && c<d && d<a && a<b && b>d){
         printf("Skupovi se ne sijeku.");
     } else if (a<c && c<b && b>a && d>c && d>b) {
         printf("Rezultantni interval je [%g,%g].", c, b);
     } else if (c<a && a<d && d>a && b>d){
         printf("Rezultantni interval je [%g,%g].", a, d);
     } else if (a<b && c<d && d>b && b==c){
         printf("Zajednicka tacka b i c je: %g", b);
     } else if (c<a && c<d && a==d && b>a){
         printf("Zajednicka tacka a i b je: %g", d);
     } else if(a<c && c<d && d<b  && b>c){
         printf("Rezultantni interval je [%g,%g].", c, d);
     } else if(c<a && a<b && b<d && d>a){
         printf("Rezultantni interval je [%g,%g].", a, b);
     }
     
    return 0;
}