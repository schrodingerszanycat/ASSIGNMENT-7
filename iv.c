/*Write a function in C to copy the elements of one array into another array.*/
// USING RECURSION
#include <stdio.h>

int toDisplay(int ab[], int n) {
    for (int i = 0; i<n; i++) {
        printf("%d ", ab[i]);
    }
}

int toCopy(int a[], int b[], int n, int i) {
    if (i < n) {
        b[i] = a[i];
        toCopy(a, b, n, ++i);
    }
}

int main() {
    int size = 0, copy[size];           // To create Array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]); 
    } 
      
    toCopy(arr, copy, size, 0);        // To create copy of array

    printf("First array: ");
    toDisplay(arr, size);

    printf("Copied array: ");
    toDisplay(copy, size);

}
