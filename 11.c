/*Write a function in C to delete an element at the desired position from an array,
considering it a list.*/
#include <stdio.h>

int del_ele(int *arr, int size, int n) {
    int pos = 0;
    for (int i = 0; i<size; i++) {  // To check if element exists
        if (arr[i] == n)
            pos = i;
        }         
    for (int j = pos; j < size-1; j++) 
        arr[j] = arr[j+1];

    printf("Modified array: ");
    for (int k = 0; k<size-1; k++) 
        printf("%d ", arr[k]);
    printf("\n");    
    
}

int main() {
    int size = 0;                                      // To create Array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) 
        scanf("%d", &arr[i]); 
    int elmt = 0;
    printf("Enter the element you want to delete: ");
    scanf("%d", &elmt);

    printf("Original array: ");
    for (int i = 0; i<size; i++) 
        printf("%d ", arr[i]);    
    printf("\n");

    del_ele(arr, size, elmt);
    
}

