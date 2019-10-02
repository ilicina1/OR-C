#include <stdio.h>
#define PI 3.14

int main() {

	float r,h,a,b,c,Pu,Vu;
	
	printf("Unesi poluprecnik: ");
	scanf( "%f" , &r);

	printf("Unesi stranicu a: ");
	scanf( "%f" , &a);

	printf("Unesi stranicu b: ");
	scanf( "%f" , &b);

	printf("Unesi stranicu c: ");
	scanf( "%f"  ,&c);
	
	printf("Unesi h: ");
	scanf( "%f" , &h);
	
	Pu=2*(a*b+a*c+b*c)+(2*r*r*PI)*(2*r*PI*h)-(2*r*r*PI);
	Vu=(a*b*h)+(r*r*PI*h);
	
	printf("\n Ukupna povrsina lika sa slike iznosi %.2f cm2" ,Pu);
	printf("\n Ukupna zapremina lika sa slike iznosi %.2f cm3" ,Vu);
	
	return 0;
}