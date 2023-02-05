/*Write a function in C to add an element at the desired position of an array, consid-
ering it a list.*/
#include <stdio.h>

int add_ele(int *arr, int size, int key, int p) {
    
    for (int j = size-1; j >= p; j--)  // Shifting elements to the right
        arr[j+1] = arr[j];             // Starting from the right most element
    arr[p] = key;

    printf("Modified array: ");
    for (int k = 0; k<size+1; k++) 
        printf("%d ", arr[k]);
    printf("\n");    
    
}

int main() {
    int size = 0;                                     // To create Array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) 
        scanf("%d", &arr[i]); 
    int p, elmt = 0;
    printf("Enter the element you want to add followed by the specific position: ");
    scanf("%d %d", &elmt, &p);

    printf("Original array: ");
    for (int i = 0; i<size; i++) 
        printf("%d ", arr[i]);    
    printf("\n");

    add_ele(arr, size, elmt, p);
    
}