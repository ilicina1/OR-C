#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("Unesite broj sekundi: ");
	int sekunde;
	scanf("%d", &sekunde);
	sekunde = abs(sekunde);
	int dani = 0, sati = 0, minute = 0;
	minute = sekunde / 60;
	sekunde = sekunde % 60;
	sati = minute / 60;
	minute = minute % 60;
	dani = sati / 24;
	sati = sati % 24;
	printf("Pretvoreno: %dd %dh %dm %ds", dani, sati, minute, sekunde);
	return 0;
}
