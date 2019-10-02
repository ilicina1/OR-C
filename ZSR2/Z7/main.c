#include <stdio.h>
#include <math.h>

int main() {
	printf("Unesite koeficijente a, b i c: ");
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double rezultat, diskriminanta;
	diskriminanta = (b * b) - 4*a*c;
	if(diskriminanta < 0){
		printf("Korijen negativnog broja nema realnih rjesenja!");
		return 0;
	}
	rezultat = sqrt(diskriminanta);
	if(fmod(a, 1) > 0 && fmod(b,1) > 0 && fmod(c,1) > 0) {
		printf("Iznos za koeficijente %.2lf, %.2lf i %.2lf je: %.5lf", a, b, c, rezultat);
	} else if(fmod(a, 1) > 0 && fmod(b,1) > 0) {
		printf("Iznos za koeficijente %.2lf, %.1lf i %.lf je: %.3lf", a, b, c, rezultat);
	} else if(fmod(rezultat, 1) == 0) {
		printf("Iznos za koeficijente %.lf, %.lf i %.lf je: %.lf", a, b, c, rezultat);
	} else if(fmod(b, 1) > 0 && fmod(c,1) > 0) {
		printf("Iznos za koeficijente %.lf, %.1lf i %.2lf je: %.4lf", a, b, c, rezultat);
	} else {
		printf("Iznos za koeficijente %.lf, %.lf i %.lf je: %.5lf", a, b, c, rezultat);
	}
	return 0;
}
