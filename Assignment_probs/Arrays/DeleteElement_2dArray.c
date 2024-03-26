#include <stdio.h>

void delete(int rows, int cols, int arr[rows][cols],int pos[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(arr[i][j]==pos[i][j]){
                arr[i][j]=NULL;
            } 
        }
    
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
    int rows = 2;
    int cols = 3;
    
    int arr1[2][3] = {{1, 2, 3}, {2, 6, 5}};
    
    // Function pointer declaration
    void (*ptr)(int, int, int[rows][cols]);
    ptr = &delete;
    
    void (*fptr)(int, int, int[rows][cols]);
    fptr = &print_matrix;
    // Print the original matrix
    printf("Matrix 1:\n");
   (*fptr)(rows, cols, arr1);

    // Calculate and print sum of elements in each row
    (*ptr)(rows, cols, arr1);

    return 0;
}
