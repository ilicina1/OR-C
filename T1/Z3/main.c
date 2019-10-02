#include <stdio.h>
#include <math.h>

int main() {
    
    float x1, y1, z1, x2, y2, z2, d1;
    
	printf("Unesite koordinate prve tacke:");
	scanf ("%f%f%f", &x1, &y1, &z1);
	
	printf("Unesite koordinate druge tacke:");
	scanf("%f%f%f", &x2, &y2, &z2);
	
	d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
	printf("Udaljenost izmedju tacaka t1 i t2 je %2f ", d1);
	
	return 0;
}
