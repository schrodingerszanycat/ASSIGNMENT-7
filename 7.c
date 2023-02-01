/*Write a function in C to print all unique elements in an array.*/
#include <stdio.h>
#include <stdlib.h>

int uniq(int *a, int n) {
    int visit[n];
    for (int i = 0; i<n; i++) {
        if (visit[i] == -1)
            continue;
        for (int j = i+1; j<n; j++){
            if (a[j] == a[i]) visit[j] = -1;
            
        }
        printf("%d ", a[i]);
    }
    printf("\n");     
}

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int* p = (int *) malloc(size*sizeof(int));
    printf("Enter all the elements: ");
    for (int i = 0; i<size; i++) 
        scanf("%d", &arr[i]);
    
    printf("The unique elements of the array are: ");
    uniq(arr, size);    
}