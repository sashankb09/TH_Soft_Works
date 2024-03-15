// accept an integer from user , check if the nineth bit is set or not , (one enum , one macro , switch case)
//  if the nineth bit is set then need to multiply two matrices 
//  if the nineth is not set then we need to find the given number is is even or odd without using modulus operator

#include <stdio.h>

#define SetorNot(num) (num & (1<<8))

#define r 2
#define c 2

enum steps {
    multiplication,
    evenorodd
};

void printMatrix(int matrix[r][c]) {
    printf("Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int evenorOdd(int num){
    switch(num & 1){
        case 0:
            printf("Number is even");
            break ;
        case 1:
            printf("Number is odd");
            break;
    }
}

void Multiplication(int m1[r][c], int m2[r][c]) {
    int result[r][c] = {{0}};
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            for(int k = 0; k < c; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    printMatrix(result);
}

int main() {
    int num;
    printf("Enter the number that you want to check: ");
    scanf("%d", &num);
    
    if(SetorNot(num)) {
        printf("Ninth bit is set.\n");
        printf("Enter the size of the matrix (2x2): ");
        int m1[r][c] = {{1, 2}, {4, 5}};
        int m2[r][c] = {{2, 4}, {5, 6}};
        Multiplication(m1, m2);
    } else {
        printf("Ninth bit is not set.\n");
        evenorOdd(num);
    }
    
    return 0;
}
