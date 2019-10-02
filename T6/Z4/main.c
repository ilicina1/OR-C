#include <stdio.h>
#define vel 10

int main() {
  int arr[vel];
  int num, finArrLength=vel;
  
  printf("Unesite elemente niza: ");
  for (int i=0;i<vel;i++) {
    scanf("%i", &arr[i]);
    
    if (arr[i]==-1) {
      finArrLength=i;
      break;
    }
  }
  
  printf("Unesite element koji treba izbaciti: ");
  scanf("%i", &num);
  
  int counter=0;
  for (int i=0;i<finArrLength;i++) {
    for (int j=1;j<finArrLength;j++) {
      if (arr[0]==arr[j]) {
        counter++;
      }
    }
    
    if (arr[i]==num && i!=finArrLength) {
      if (counter==finArrLength-1) {
        finArrLength=0;
        break;
      }
  	  for (int j=i;j<finArrLength-1;j++) {
        arr[j]=arr[j+1];
  	  }
      finArrLength--;
  	}
  }
  
  printf("Novi niz glasi: ");
  for (int i=0;i<finArrLength;i++) {
  	printf("%i", arr[i]);
  	i!=finArrLength-1 ? printf(",") : 0;
  }
  
  return 0;
}