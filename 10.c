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
    for (int i = 0; i<size; i++) scanf("%d", &arr[i]);

    toSeparate(arr, size);
}

int toSeparate(int *a, int size) {
    int count = 0; // Of odd integers
    for (int i = 0; i<size; i++)
        if (a[i] % 2) count++;
    
    int odd_array[count]; int even_array[size-count];

    int i1 = 0, i2 = 0; // For odd and even arrays respectively
    for (int j = 0; j<size; j++) {
        if (a[j] % 2) {
            odd_array[i1++] = a[j];
        }
        else 
            even_array[i2++] = a[j];
    }
    for (int p = 0; p<size; p++) printf("%d ", odd_array[p]);
    for (int q = 0; q<size-count; q++) printf("%d ", evem_array[q]);


}