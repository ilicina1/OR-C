#include <stdio.h>

int b(int *p, int x)
{
    int *z = p;
    while(*z++<x){
        printf("%d ",*z);
    };
    //printf("%d ",*p);
    // printf("%d",*z);
    int n = z-p;
    printf("%d",n);
    return z-p;
}

int main()
{
    int X[4] = {19, 29, 39, 49};
    int y = 1;
    y = b(X,40);
    printf("\n%d", y);
}
