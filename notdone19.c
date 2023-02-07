/*Write a program in C to find the sum of rows and columns of a matrix.*/
#include <stdio.h>

int main() {
    int rows = 0;
    int columns = 0;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];
    
    printf("Enter all the elements: ");
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j<columns; j++)
                scanf("%d", &arr[i][j]);
    }
    // to print the matrix
    printf("Th matrix is: ");
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j<columns; j++) {
            printf("%d ", arr[i][j]);
            
        }             
    }
    print("\n");
}

int sum(int *arr, int rows, int columns) {
    int sum = 0;
    for (int i = 0; i<rows; i++) {
        for (int j = 0; j<columns; j++) {
            //sum += arr[i][j];
        }
        print("Sum of row %d: %d", i+1, sum);
    }
}
