/*Write a program in C to separate odd and even integers stored in an array into two
separate arrays.*/

#include <stdio.h>

int toSeparate(int *a, int size);

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++) scanf("%d", &a[i]);

    toSeparate(arr, size);
}

int toSeparate(int *a, int size) {
    for (int i = 0; i<size; i++) {
        if (a[i] %2 == 0) {
            even_array[i1] = a[i];
            
        }
    }
    
}