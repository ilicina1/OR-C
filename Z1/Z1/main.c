#include <stdio.h>
#include <string.h>

int main() {

	int temperatura1, temperatura2, temperatura3;
	char S, M, B;

	printf("Unesite prognozu za Sarajevo:");
	printf("\nTemperatura: ");
	scanf("%d", &temperatura1);

    do{
        printf("Padavine (D/N): ");
        scanf(" %c", &S);


        if(S == 'D' || S == 'd' || S == 'N' || S == 'n'){
		    break;

        } else {
            printf("Pogresan unos.\n");
        }

    }while(!(S == 'D' || S == 'N' || S == 'd' || S == 'n'));

    printf("Unesite prognozu za Mostar:");
    printf("\nTemperatura: ");
	scanf("%d", &temperatura2);

	do{
        printf("Padavine (D/N): ");
        scanf(" %c", &M);

        if(M == 'D' || M == 'd' || M == 'N' || M == 'n'){
            break;

        } else {
            printf("Pogresan unos.");
        }

	}while(M != 'D' || M != 'N' || M != 'd' || M != 'n');

	printf("Unesite prognozu za Bihac:");
    printf("\nTemperatura: ");
	scanf("%d", &temperatura3);

	do{
        printf("Padavine (D/N): ");
        scanf(" %c", &B);

        if(B == 'D' || B == 'd' || B == 'N' || B == 'n'){
            break;

        } else {
            printf("Pogresan unos.\n");
        }

	}while(B != 'D' || B != 'N' || B != 'd' || B != 'n');

    do{
        if((temperatura1 >= 20 && temperatura1 <= 30) && (S == 'N' || S == 'n') || (temperatura1 >= -5 && temperatura1 <= 5) && (S == 'N' || S == 'n')){
        printf("Drugarice idu u Sarajevo.\n");
        break;
   } else if((temperatura2 >= 20 && temperatura2 <=30) && (M == 'N' || M == 'n') || ((temperatura2 >= -5 && temperatura2 <= 5) && (M == 'N' || M == 'n'))){
        printf("Drugarice idu u Mostar.\n");
        break;
   } else if((temperatura2 <= 5 || temperatura2 >= 20) && (M == 'N' || M == 'n')){
        printf("Anja i Una mogu u Mostar.\n");
        break;
   } else if((temperatura3 >= 20 && temperatura3 <= 30) && (B == 'N' || B == 'n') || (temperatura3 >= -5 && temperatura3 <= 5) && (B == 'N' || B == 'n')){
        printf("Drugarice idu u Bihac.\n");
        break;
   } else if((temperatura1 >= -5 && temperatura1 <= 0) && (S == 'D' || S == 'd')){
        printf("Anja i Elma mogu u Sarajevo.\n");
        break;
   } else if((temperatura1 >= -5 && temperatura1 <= 30) && (S == 'N' || S == 'n')){
        printf("Anja i Elma mogu u Sarajevo.\n");
        break;
   } else if((temperatura2 >= -5 && temperatura2 <= 0) && (M == 'D' || M == 'd')){
        printf("Anja i Elma mogu u Mostar.\n");
        break;
   } else if((temperatura2 >= -5 && temperatura2 <= 30) && (M == 'N' || M == 'n')){
        printf("Anja i Elma mogu u Mostar.\n");
        break;
   } else if((temperatura3 >= -5 && temperatura3 <= 0) && (B == 'D' || B == 'd')){
        printf("Anja i Elma mogu u Bihac.\n");
        break;
   } else if((temperatura3 >= -5 && temperatura3 <= 30) && (B == 'N' || B == 'n')){
        printf("Anja i Elma mogu u Bihac.\n");
        break;
   } else if((temperatura1 <= 5 || temperatura1 >= 20) && (S == 'N' || S == 'n')){
        printf("Anja i Una mogu u Sarajevo.\n");
        break;
   } else if((temperatura2 <= 5 || temperatura2 >= 20) && (M == 'N' || M == 'n')){
        printf("Anja i Una mogu u Mostar.\n");
        break;
   } else if((temperatura3 <= 5 || temperatura3 >= 20) && (B == 'N' || B == 'n')){
        printf("Anja i Una mogu u Bihac.\n");
        break;
   } else if((temperatura1 >= -5 && temperatura1 <= 5) && (S == 'N' || S == 'n') || (temperatura1 >= 20 && temperatura1 <= 30) && (S == 'N' || S == 'n')){
        printf("Elma i Una mogu u Sarajevo.\n");
        break;
   } else if((temperatura2 >= -5 && temperatura2 <= 5) && (M == 'N' || M == 'n') || (temperatura2 >= 20 && temperatura2 <= 30) && (M == 'N' || M == 'n')){
        printf("Elma i Una mogu u Mostar.\n");
        break;
   } else if((temperatura3 >= -5 && temperatura3 <= 5) && (B == 'N' || B == 'n') || (temperatura3 >= 20 && temperatura3 <= 30) && (B == 'N' || B == 'n')){
        printf("Elma i Una mogu u Bihac.\n");
        break;
   } else if((temperatura1 < -5 && (S == 'D' || S == 'd')) || (temperatura1 > 0 && (S == 'D' || S == 'd')) || (temperatura2 < -5 && (M == 'D' || M == 'd')) || (temperatura2 > 0 && (M == 'D' || M == 'd')) || (temperatura3 < -5 && (B == 'D' || B == 'd')) || (temperatura3 > 0 && (B == 'D' || B == 'd'))){
        printf("Ne odgovara niti jedan grad.");
        break;
   }

   }while (S == 'N' || S == 'n' || S == 'D' || S == 'd');

	return 0;
}