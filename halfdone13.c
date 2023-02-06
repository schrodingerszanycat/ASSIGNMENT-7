/*Write a function in C to add a new value in a sorted array. After the operation, the
modified array needs to be sorted.*/
#include <stdio.h>




int new_val(int *arr, int size, int ele) {
    arr[size] = ele;  
    
    printf("Modified array is: ");
    for (int k = 0; k<size+1; k++) printf("%d ", arr[k]);
    printf("\n");
}
int main() {
    int ele, size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i<size; i++) 
        scanf("%d", &arr[i]);
    printf("Enter element to be added: ");
    scanf("%d", &ele);

    printf("Original array is: ");
    for (int j = 0; j<size; j++) printf("%d ", arr[j]);
    printf("\n");
 
    new_val(arr, size, ele);
}   