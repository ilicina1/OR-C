#include <stdio.h>
#define arrLength 100

float maxtemp(float p[arrLength], int finalArrLenght)
{
	float maxt=0;
	for (int i=0; i<finalArrLenght; i++) {
		if (p[i]>maxt) {
			maxt=p[i];
		}
	}
	return maxt;
}

float prtemp(float p[arrLength], int finalArrLenght)
{
	float prt=0;

	for (int i=0; i<finalArrLenght; i++) {
		prt+=p[i];
	}

	prt/=finalArrLenght;
	return prt;
}

int main()
{
	float tempArray[arrLength];
	float maxt,prt;
	int finalArrLenght=arrLength;

	printf("Unesite broj mjerenja: ");
	scanf("%i", &finalArrLenght);
	printf("Unesite temperature: ");

	for (int i=0; i<finalArrLenght; i++) {

		scanf("%f", &tempArray[i]);

	}

	maxt=maxtemp(tempArray, finalArrLenght);
	prt=prtemp(tempArray, finalArrLenght);

	printf("Maksimalna temperatura: %.1f", maxt);
	printf("\nProsjecna temperatura: %.1f", prt);

	
	return 0;
}
