#include <stdio.h>


int decimalToBinary(int num) {
    if (num > 0) {
        decimalToBinary(num / 2);
        printf("%d", num % 2);
    }
}

int main() {
    int (*ptr)(int)=&decimalToBinary;
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Binary equivalent: ");
    if (number == 0) {
        printf("0"); 
    } else {
        ptr(number);
    }
    printf("\n");

    return 0;
}


// Enter a decimal number: 45
// Binary equivalent: 101101