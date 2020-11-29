#include <stdio.h>

void insertionSort(int *A,int n) {
  int value,hole;
  for(int i=1;i<n;i++) {
    value = A[i];
    hole = i;
    while(hole>0 && A[hole-1] > value) {
      A[hole] = A[hole-1];
      hole--;
    }
    A[hole] = value;
  }
}

int main(void) {
  int A[] = {5,3,8,6,2,8,9,3,8,9,5};
  int size = sizeof(A) / sizeof(A[0]);
  insertionSort(A,size);
  for(int i=0;i<size;i++){
    printf("%d ",A[i]);
  }
  return 0;
}