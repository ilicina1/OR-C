#include <stdio.h>

int main() {
    int n, i, k, j;
    
        do{
        printf("Unesite broj N: ");
        scanf("%d", &n);
        
        k=4*n+1;
        
        if(k==1 || k%2==1){
            break;
        } else { 
            printf("N nije ispravno!\n");
        }    
        } while(k%2==1);
        
        for(i=0; i<n; i++){
            
            for(j=0; j<n; j++){
                if(i==0 || j==n-1 || i==n-1 || j==0 && i!=1 || i==2 && j!=n-2 || j==n-3 && i!=1 && i!=n-2 ||i==n-3 && j!=1 && j!=n-2 || j==2 && i!=n-2 && i!=1 && i!=3 ||i==4 && j>2 && j<5 ){
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        
}