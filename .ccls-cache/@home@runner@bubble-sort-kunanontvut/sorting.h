// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (i = n - 1; i > 0; i--) {
    sorted = 0;
    for (j = 0; j < i; j++) {
      if (a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0)
      break;
  }
}

int Isprime(int x) {
  int i;
  if (x == 1)
    return 0;
  else {
    for (i = 2; i < x; i++) {
      if (x % i == 0) {
        return 0;
      }
    }
    return 1;
  }
}

void selectionSort(int a[], int n) {
  int i, j, m, k;
  for (j = 0; j < n - 1; j++) {
    m = a[j];
    k = j;
    for (i = j + 1; i < n; i++) {
      if (m > a[i]) {
        m = a[i];
        k = i;
      }
    }
    swap(&a[j], &a[k]);
    printf("Minimum is %d\n ", m);
    display(a, n);
  }
}

void insertion(int a[], int n) {
  int j,i,tmp;
    for(j=1;j<n;j++){
      int value = a[j];
        for(i = j-1; i >= 0 ;i--){
          if(value>a[i])
            break;
          else 
            a[i+1]=a[i];
            display(a,n);
          }
          a[i+1] = value;
          display(a, n);
        printf("\n");
        
    }
}