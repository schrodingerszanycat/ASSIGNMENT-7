/*Write a program in C to find the minimum element in an array.*/
#include <stdio.h>

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    for (int j = 1; j<size; j++) {
        if (min > arr[j]) min = arr[j];
        else continue;
    }
    printf("%d\n", min);
}