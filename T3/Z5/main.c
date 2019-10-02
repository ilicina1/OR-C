#include <stdio.h>
#include <math.h>

int main() {
	
	float s=0;
	int n, i=1;
	
	printf("Unesite broj n: ");
	scanf("%i", &n);
	
	while(i<=n){
	s += pow(-1, i-1)/i;
	i++;
}
	printf("Koristeci %i clanova suma je %.3f.", n, s);
	return 0;
}

