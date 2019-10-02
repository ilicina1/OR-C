#include <stdio.h>

#define NSP1 90.0
#define NSP2 120.0
#define NDP1 60.0
#define NDP2 80.0
#define P1 55.0
#define P2 100

int main() {
    
    float SP, DP, P;
    
    printf("Dobrodosli kod Vaseg kucnog ljekara!\n");
    
    printf("Unesite sistolicki, dijastolicki pritisak i puls: ");
    scanf("%f" "%f" "%f", &SP, &DP, &P);
    
    if(SP>=NSP1 && SP<=NSP2){
        printf("SP: normalan\n");
    } else {
        printf("SP: nije normalan\n");
    }
    
    if(DP>=NDP1 && DP<=NDP2){
        printf("DP: normalan\n");
    } else {
        printf("DP: nije normalan\n");
    }
    
    if(P>=P1 && P<=P2){
        printf("Puls: normalan\n");
    } else {
        printf("Puls: nije normalan\n");
    }
    
    return 0;
    
}