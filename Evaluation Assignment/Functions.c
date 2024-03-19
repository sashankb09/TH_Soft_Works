#include<stdio.h>

void IntOperation(int number, int *c);

int main() {
    int number, result;
    printf("Enter an integer: ");
    scanf("%d", &number);

    IntOperation(number, &result);
   
    printf("The solution is: %d\n", result);

    return 0;
}

void IntOperation(int number, int *c) {
    int a = 3;
    int *pa = &a;
    int b = 2;
    int *pb = &b;

    if (number > 0) {
        *c = *pa + *pb;
    } else if (number < 0) {
        *c = *pa - *pb;
    } else {
        *c = (*pa) * (*pb);
    }
}
