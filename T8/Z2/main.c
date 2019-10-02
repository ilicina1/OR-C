#include <stdio.h>

float maxtemp(float p[8])
{
	float max = p[0];
	int i;

	for(i=0; i<8; i++) {
		if(p[i]>max) {
			max=p[i];
		}
	}
	return max;
}

float prtemp(float p[8])
{
	float prtmp = 0;
	int i;

	for(i=0; i<8; i++) {
		prtmp += p[i];
	}

	prtmp /= 8;
	return prtmp;

}

int main()
{
	int i;
	float niz[8];

	printf("Unesite temperature: ");
	for(i=0; i<8; i++) {
		scanf("%f", &niz[i]);
	}

	printf("Maksimalna temperatura: %.1f\n", maxtemp(niz));
	printf("Prosjecna temperatura: %.1f", prtemp(niz));

	return 0;
}
