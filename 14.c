/*Write a function in C to find the second largest element in an array.*/
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
    int sec_max = arr[0];
    for (int j = 1; j<size; j++) {
        if (sec_max < arr[j]) sec_max = arr[j-1];
        else continue;
    }
    printf("%d\n", sec_max);
}