/*Write a program in C to read n int values in an array and display it in reverse order.*/
#include <stdio.h>

int main() {
    int size = 0;    
    printf("Enter the size of the array: \n");   // To create the array
    scanf("%d", &size);
    printf("Enter the elements: ");
    int arr[size];
    for (int i = 0; i<size; i++) {
        scanf("%d ", &arr[i]);
    }  

    for (int j = size-1; j >=0 ; j--) {
        printf("%d ", arr[j]);
    }
}


for (int i = 0; i<n; i++) {
    if (!flag[i]){
        for (int j = 0; j<n; j++) {
            flag[j] = a[i] == a[j];
            flag[i] = flag[i] || flag[j];
        }
    }
}