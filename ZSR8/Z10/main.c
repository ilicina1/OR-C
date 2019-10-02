#include <stdio.h>

void zamijeni_pokazivace(int **a, int **b)
{
	int c = **a;
	**a = **b;
	**b = c;
}

int main()
{
	int a=5;
    int b=10;
    int *pok1 = &a;
    int *pok2 = &b;
    zamijeni_pokazivace(&pok1, &pok2);
    printf("Pokazivac 1 pokazuje na %d , a pokazivac 2 na %d.", *pok1, *pok2);
	return 0;
}
