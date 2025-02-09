// 8. Create a program to multiply two matrices using pointers.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
    printf("Enter elements of first matrix: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += *((int*)(&mat1[i][k])) * *((int*)(&mat2[k][j]));
            }
        }
    }
    printf("Multiplied matrix: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
