#include <stdio.h>

int main() {
    int m, n;

    // Input the dimensions of the matrix
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0) {
        printf("Invalid dimensions. Both m and n should be positive integers.\n");
        return 1; // Exit the program with an error code
    }

    // Declare a matrix of size m x n
    int matrix[m][n];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the matrix
    printf("Matrix %d x %d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

