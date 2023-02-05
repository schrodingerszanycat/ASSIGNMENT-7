/*Write a function in C for the addition of two matrices of the same size.*/
#include <stdio.h>

int addMat(int a[3][3], int b[3][3]);

int main() {
    int a[3][3] = {{1,1,1},
                   {1,1,1}, 
                   {1,1,1}};
    int b[3][3] = {{1,4,1},
                   {1,4,1},
                   {1,5,1}};
    addMat(a, b);
}
int addMat(int a[3][3], int b[3][3]) {
    int c[3][3];
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            c[i][j] = a[i][j] + b[i][j];   
            printf("%d ", c[i][j]);     
        }
    }    
}