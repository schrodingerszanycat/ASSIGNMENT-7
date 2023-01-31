/*Write a function in C to copy the elements of one array into another array.*/
#include <stdio.h>

int copyArray();

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]); 
    }
    
}

int copyArray(int n, int a[]) {
    int copy[n];
    for(int j = 0; j<n; j++) {
        copy[j] = a[j];   
    }
    return copy;
}