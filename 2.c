/*Write a function in C to find the sum of all array elements.*/
#include <stdio.h>
int findSum(int a[], int size);           

int main() {
    int size = 0;
    printf("Enter the size of the array: ");  
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", findSum(arr, size));       
}

int findSum(int a[], int size) {             
    int sum = 0;
    for(int j = 0; j<size; j++) {
        sum += a[j];
    }
    return sum;
}