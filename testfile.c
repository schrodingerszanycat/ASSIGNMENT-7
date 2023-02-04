/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/
#include <stdio.h>
#include <stdlib.h>

//int toPrint(int a[], int b[], int size);

int merge_array(int *a, int *b, int size);

int main() {
  int size = 6;
  
  int a[size] = {10, 9, 8, 1, 1, 1};
  int b[size] = {76, 5, 4, 3, 2};
  toMerge(a, b, size);
  printf("\n");

// toPrint(a, b, size);
}

// int toPrint(int *a, int *b, int size) {
//   int i, j;
//   for (int i = 0; i<size; i++) printf("%d ", a[i]);
//   printf("\n");
//   for (int j = 0; j<size; j++) printf("%d ", b[j]);
// }

int toMerge(int *a, int *b, int size) {
  int *r = (int *) malloc(2*size*sizeof(int));
  int merged[2*size];

  int i1 = 0, i2 = 0;
  for (int i = 0; i<2*size; i++) {
    if (i1 < size && i2 < size){
        if (a[i1] > b[i2]) {
            merged[i] = a[i1];
            i1++;
        }
        else {
            merged[i] = b[i2];
            i2++;
        }
    }
    else if (i1 >= size) {
        merged[i] = a[i1];
        i1++;
    }
    else if (i2 >= size) {
        merged[i] = b[i2];
        i2++;
    }

  }
  for (int k = 0; k<2*size; k++)
    printf("%d ", merged[k]);
}

