/*Write a program in C to count the occurrences of odd numbers in an array.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements: ");
    int* p = (int *) calloc(size, sizeof(int));
    for (int i = 0; i<size; i++)
        scanf("%d", &arr[i]);

    int count = 0;
    for (int j = 0; j<size; j++) {
        if (arr[j] % 2 != 0)
            count++;
    }
    printf("The number of odd numbers in array is %d.\n", count);
}