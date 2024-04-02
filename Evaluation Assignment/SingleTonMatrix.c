#include<stdio.h>

#define rows 3
#define cols 3

int SingletonMat(int mat[rows][cols], int row, int col){
    int nonZeroCount = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }
    return nonZeroCount == 1; 
}

int main(){
    int mat[rows][cols];
    int row;
    int col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);

    printf("Enter matrix values:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    if(SingletonMat(mat, row, col)){
        printf("Matrix is a singleton matrix\n");
    }else{
        printf("Matrix is not a singleton matrix\n");
    }

    return 0;
}
