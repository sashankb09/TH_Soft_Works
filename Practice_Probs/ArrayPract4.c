#include <stdio.h>
#include <stdlib.h>

void row_sum(int rows, int cols, int arr[rows][cols]) {
    int rowsum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowsum += arr[i][j];
        }
        printf("Sum of elements in row %d: %d\n", i + 1, rowsum);
        rowsum = 0;
    }
}

void print_matrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int (*arr)[cols] = malloc(rows * sizeof(int[cols]));
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    void (*ptr)(int, int, int[rows][cols]);
    ptr = &row_sum;

    void (*fptr)(int, int, int[rows][cols]);
    fptr = &print_matrix;

    printf("Matrix:\n");
    (*fptr)(rows, cols, arr);

    (*ptr)(rows, cols, arr);
    free(arr);

}
