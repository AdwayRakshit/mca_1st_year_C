#include <stdio.h>

int main() {
    int rows, cols, count = 0;
    
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
    
    int totalElements = rows * cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    
    if (count > totalElements / 2) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
