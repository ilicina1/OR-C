#include <stdio.h>

int main() {
	printf("Unesite godine: ");
	int godine;
	scanf("%d", &godine);
	if(godine < 0 || godine > 100){
		printf("Godina nije u intervalu od 0 do 100!");
		return 0;
	}
	if(godine == 0) printf("Imate %d godina", godine);
	else if(godine == 1 || godine == 21 || godine == 31 || godine == 41 || godine == 51 || godine == 61 || godine == 71 || godine == 81 || godine == 91) printf("Imate %d godinu", godine);
	else if((godine >= 2 && godine <= 4) || (godine >= 22 && godine <= 24) || (godine >= 32 && godine <= 34) || (godine >= 42 && godine <= 44) || (godine >= 52 && godine <= 54) || (godine >= 62 && godine <= 64) || (godine >= 72 && godine <= 74) || (godine >= 82 && godine <= 84) || (godine >= 92 && godine <= 94)) printf("Imate %d godine", godine);
	else printf("Imate %d godina", godine);
	return 0;
}
