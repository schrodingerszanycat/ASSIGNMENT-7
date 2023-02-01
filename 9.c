/*Write a program in C to count the frequency of each element of an array.*/
#include <stdio.h>
#include <stdlib.h>

int freq(int *a, int n) {                                       
    int visit[n];
    for (int i = 0; i<n; i++) {
        if (visit[i] == -1)
            continue;
        int count = 1;
        for (int j = i+1; j<n; j++) {
            if (a[j] == a[i]){
                count++;
                visit[j] = -1;
            }
        }
        printf("The frequency of %d is %d.\n", a[i], count);
    }
}

int main() {
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int* p = (int *) malloc(size*sizeof(int));
    printf("Enter the elements: ");
    for (int j = 0; j<size; j++) 
        scanf("%d", &arr[j]);

    freq(arr, size);

}