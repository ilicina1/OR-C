#include <stdio.h>

int main() {
	
	int iznos, rez1, rez2, rez3, rez4, rez5, rez6;
	
	printf("Unesite iznos: ");
	scanf("%d", &iznos);
	
	rez1 = iznos / 50;
	rez2 = (iznos % 50) / 20;
	rez3 = (iznos % 50 % 20) / 10;
	rez4 = (iznos % 50 % 20 % 10) / 5;
	rez5 = (iznos % 50 % 20 % 10 % 5) / 2;
	rez6 = (iznos % 50 % 20 % 10 % 5 % 2) / 1;
	
	printf("%d novcanica od 50 KM\n", rez1);
	printf("%d novcanica od 20 KM\n", rez2);
	printf("%d novcanica od 10 KM\n", rez3);
	printf("%d novcanica od 5 KM\n", rez4);
	printf("%d novcanica od 2 KM\n", rez5);
	printf("%d novcanica od 1 KM\n", rez6);
	
	return 0;
}
