#include <stdio.h>
#define VISINA 10
#define SIRINA 10

int main()
{
  int i,j, min;
  int A[VISINA][SIRINA];
  int n = VISINA;
  int m = SIRINA;

  for( i = 0; i < n; i++ )
    for(j = 0; j < m; j++ ) {
      scanf("%d", &A[i][j]);
    }

  min = A [0] [0];
  for (i=1; i<10; i++) {
    if (A [i] [i] < min)
      min = A [i] [i];
  }

  printf("%d", min);

  return 0;
}
