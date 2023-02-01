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

    for (int i = 0; i<size; i++) {               // To print the reverse
        printf("%d ", arr[size-1-i]);
    }
}

// int main() {                                         //MALLOC USAGE
//     printf("Enter the size of the array:\t");
//     int size;
//     scanf("%d", &size);
//     printf("Enter the elements of the array:\n");
//     double *arr = (double *) malloc(size*sizeof(double)); 
//     for(int i=0; i<size; i++) 
//     {
//         scanf("%lf", &arr[i]);
//     }
// }