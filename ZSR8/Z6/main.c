#include <stdio.h>

void nadovezi(int *p1, const int *q1, const int *q2)
{
	while(q1 != q2){
		*p1 = *q1;
		p1++;
		q1++;
	}
}

int main()
{
	int niz1[10] = {0,0,0,0,0,0,0,0,0,0};
	int niz2[5] = {1,2,3,4,5};
	nadovezi(niz1 + 3, niz2, niz2 + 5);
	for(int i = 0; i < 10; i++)printf("%d ", niz1[i]);
	return 0;
}
