#include <stdio.h>
#include <math.h>

int main() {
	printf("Unesite stepene: ");
	float stepen;
	scanf("%f", &stepen);
	if(stepen == 0){
		printf("0 = 0^ 0' 0''");
		return 0;
	}
	float pomocni = stepen;
	float stepeni = 0, minute = 0, sekunde = 0;
	stepeni = (int) stepen;
	stepen = fmod(stepen, (int) stepen);
	minute = stepen * 60;
	stepen = fmod(minute, (int) minute);
	sekunde = stepen * 60;
	printf("%0.7g = %.lf^ %.lf' %.lf''", pomocni, stepeni, minute, sekunde);
	return 0;
}
