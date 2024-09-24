#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < rows; i++) {
        int row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, row_sum);
    }
    
    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, col_sum);
    }

    return 0;
}
