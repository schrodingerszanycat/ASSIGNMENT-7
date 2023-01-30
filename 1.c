/*Write a program in C to read n int values in an array and display it in reverse order.*/
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d ", &size);
    
    int arr[size];
    for (int i = 0; size<i; i++) {
        scanf("%d ", &arr[i]);
    }
    printf("Enter the elements: \n");

    
    int seize = sizeof(arr)/sizeof(int) ;
    printf("this is seize: %d ", seize);
}