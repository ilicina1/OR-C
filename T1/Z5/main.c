#include <stdio.h>

int main() {
	float VT, MT, CV, CM, UKUPNO, RACUN, UDIOM, UDIOV;
	
	printf("Unesi potrosnju po velikoj tarifi (kWh): ");
	scanf("%f", &VT);
	
	printf("Unesi potrosnju po maLoj tarifi (kWh): ");
	scanf("%f", &MT);
	
	printf("\n Cijena za veliku tarifu po jednom Kwh: "); 
	scanf("%f", &CV);
	
	printf("\n Cijena za malu tarifu po jednom Kwh: "); 
	scanf("%f", &CM);
	
	
	
	UKUPNO=VT+MT;
	RACUN=VT*CV+MT*CM;
	UDIOM=(MT/UKUPNO)*100;
	UDIOV=(VT/UKUPNO)*100;
	
	/* Ispis */
	printf ("\n Ukupna potrosnja elektricne energije je: %.f KWh", UKUPNO);
	printf ("\n Iznos racuna je: %.f KM", RACUN);
	printf ("\n Udio velike tarife u potrosnji je: %.f procenata", UDIOV);
	printf ("\n Udio male tarife u potrosnji je: %.f procenata", UDIOM); 

	return 0;
	
}
