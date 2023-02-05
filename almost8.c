/*Write a function in C to merge two arrays of the same size sorted in descending
order.*/
#include <stdio.h>
#include <stdlib.h>

//int toPrint(int a[], int b[], int size);

int merge_array(int *a, int *b, int size);

int main() {
  int size = 0;
  printf("Enter size of the 2 arrays: ");
  scanf("%d", &size);
  int a[size], b[size];
  int *p = (int *) malloc(size*sizeof(int));
  int *q = (int *) malloc(size*sizeof(int));
  printf("Enter elements of the two arrays in their descending order: ");
  for (int i = 0; i<size; i++) scanf("%d", &a[i]);
  for (int j = 0; j<size; j++) scanf("%d", &b[j]);
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

