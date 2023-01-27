// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(i=n-1;i>0;i--){
  sorted = 0;
  for(j=0;j<i;j++){
    if(a[j]>a[j+1]){
      swap(&a[j],&a[j+1]);
      sorted = 1;
    }
  display(a,n);
 }
  if(sorted == 0)break;
}
}

int Isprime(int x){
  int i;
  if(x == 1)return 0;
  else{for(i=2;i<x;i++){
    if(x%i == 0 ){
      return 0;
    }
  }
     return 1;
    }
}




