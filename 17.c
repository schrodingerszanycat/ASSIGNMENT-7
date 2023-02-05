/*Write a function in C for the multiplication of two matrices.*/
#include <stdio.h>

int addMat(int a[3][3], int b[3][3]);

int main() {
    int a[3][3] = {{2,1,1},
                   {1,1,1}, 
                   {1,1,1}};
    int b[3][3] = {{1,1,1},
                   {1,1,1},
                   {1,1,1}};
    addMat(a, b);
}
int addMat(int a[3][3], int b[3][3]) {
    int c[3][3];
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            c[i][j] = 0;
            for (int k = 0; k<3; k++) {
                c[i][j] =+ (a[i][k])*(b[k][j]);
            }
        }
    }
    for (int p = 0; p<3; p++) {
        for (int q = 0; q<3; q++) {
            printf("%d ", c[p][q]);
        }
    }
}