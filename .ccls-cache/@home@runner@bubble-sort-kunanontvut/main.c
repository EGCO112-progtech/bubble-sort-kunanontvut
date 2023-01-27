#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc , char *argv[]) {
  int N,n;
  int i, j=0, new_number;
  
  N = argc-1;
  
  int *a = (int*)malloc(sizeof(int)*N);
  int *prime = (int*)malloc(sizeof(int)*N);
  
  for(i=0;i<N;i++){
    a[i]= atoi(argv[i+1]);
    if(Isprime(a[i])){ 
      prime[j]=a[i];
      j++;
    }
  }
  n=j;
  if(n==0)printf("No prime\n");
  else{
  display(prime, n);
  bubbleSort(prime, n);
  // insertion(a,N);

  // selectionSort(a,N);
  display(prime, n);
  }
  return 0;
}
  