#include <stdio.h>

int main() {

	int DAN, MJESEC;
	
	printf("Dan: Mjesec: ");
	scanf("%d%d", &DAN,&MJESEC);
	
	
	if (MJESEC == 1 && DAN <=19) {
		printf("Vas znak je Jarac!");
	}	else if (MJESEC == 1 && DAN >= 20){
			printf("Vas znak je Vodolija!");
	}	else if (MJESEC == 2 && DAN <= 18){
			printf("Vas znak je Vodolija!");
	}	else if (MJESEC == 2 && DAN >= 19){
			printf("Vas znak je Ribe!");
	}	else if (MJESEC == 3 && DAN <= 20){
			printf("Vas znak je Ribe!");
	}
		else if (MJESEC == 3 && DAN >= 21){
			printf("Vas znak je Ovan!");		
	}
		else if (MJESEC == 4 && DAN <= 19){
			printf("Vas znak je Ovan!");
	}	else if (MJESEC == 4 && DAN >= 20){
			printf("Vas znak je Bik!");
	}	else if (MJESEC == 5 && DAN <= 20){
			printf("Vas znak je Bik!");
	}	else if (MJESEC == 5 && DAN >= 21){
			printf("Vas znak je Blizanci!");
	}	else if (MJESEC == 6 && DAN <= 20){
			printf("Vas znak je Blizanci!");
	}
		else if (MJESEC == 6 && DAN >= 21){
			printf("Vas znak je Rak!");		
	}
		else if (MJESEC == 7 && DAN <= 22){
			printf("Vas znak je Rak!");
	}	
		else if (MJESEC == 7 && DAN >= 23){
			printf("Vas znak je Lav!");		
	}
		else if (MJESEC == 8 && DAN <= 22){
			printf("Vas znak je Lav!");
	}
		else if (MJESEC == 8 && DAN >= 23){
			printf("Vas znak je Djevica!");		
	}
		else if (MJESEC == 9 && DAN <= 22){
			printf("Vas znak je Djevica!");
	}
		else if (MJESEC == 9 && DAN >= 23){
			printf("Vas znak je Vaga!");		
	}
		else if (MJESEC == 10 && DAN <= 22){
			printf("Vas znak je Vaga!");
	}
		else if (MJESEC == 10 && DAN >= 23){
			printf("Vas znak je Škorpija!");		
	}
		else if (MJESEC == 11 && DAN <= 21){
			printf("Vas znak je Škorpija!");
	}
		else if (MJESEC == 11 && DAN >= 22){
			printf("Vas znak je Strijelac!");		
	}
		else if (MJESEC == 12 && DAN <= 21){
			printf("Vas znak je Strijelac!");
	}
		else if (MJESEC == 12 && DAN >= 22){
			printf("Vas znak je Jarac!");
	}
		else {
			printf("Unijeli ste pogresan dan ili mjesec!");
	}
		
	return 0;
	
}
