#include <stdio.h>
#define arrayLength 10

int main()
{
	int nizA[arrayLength], nizB[arrayLength], nizC[arrayLength*2];
	int velA=arrayLength,velB=arrayLength;

	printf("Unesite elemente niza A: ");
	for (int i=0; i<arrayLength; i++) {
		scanf("%i", &nizA[i]);
		if (nizA[i]==-1) {
			velA=i;
			break;
		}
	}

	printf("Unesite elemente niza B: ");
	for (int i=0; i<arrayLength; i++) {
		scanf("%i", &nizB[i]);
		if (nizB[i]==-1) {
			velB=i;
			break;
		}
	}

	//Upis niza u pomocni niz C
	for (int i=0; i<velA+velB; i++) {
		if (i<velA) {
			nizC[i]=nizA[i];
		} else {
			nizC[i]=nizB[i-velA];
		}
	}

	printf("Niz C glasi: ");

	//Ispis pomocnog niza C
	for (int i=0; i<velA+velB; i++) {
		printf("%i", nizC[i]);
		i!=velA+velB-1 ? printf(",") : 0;
	}

	//Ispis bez pomocnog niza C
	/*for (int i=0;i<velA;i++) {
		printf("%i", nizA[i]);
		if (velB==0) {
			i!=velA-1 ? printf(",") : 0;
		}
		else {
			printf(",");
		}
	}
	for (int i=0;i<velB;i++) {
		printf("%i", nizB[i]);
		i!=velB-1 ? printf(",") : 0;
	}*/

	return 0;
}
