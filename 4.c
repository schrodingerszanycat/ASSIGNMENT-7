/*Write a function in C to copy the elements of one array into another array.*/
#include <stdio.h>

int copyArray();

int main() {
    int size = 0;                                      // To create Array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]); 
    }

    printf("Your initial array elements are:\n");
    for (int p = 0; p<size; p++) {
        printf("%d ", arr[p]);
    }
    printf("\n");
    printf("Your copied array elements are:\n");
    copyArray(size, arr);
}

int copyArray(int n, int* a) {
    int copy[n];
    for(int j = 0; j<n; j++) {
        copy[j] = a[j];   
    }
    for (int k = 0; k<n; k++) {
        printf("%d ", copy[k]);
    }
}