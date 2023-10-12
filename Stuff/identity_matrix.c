#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m = 5, n = 5;
    int matrix[m][n];
    // Make an identity matrix of size m and n
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j) {
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = 0;
            }
        }
    }
    // Print the array!
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to the next row
    }
}