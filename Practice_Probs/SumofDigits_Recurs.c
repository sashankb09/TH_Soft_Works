#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        return reverseNumber(num / 10, reversedNum+num%10 );
    }
}

int main() {
    int (*ptr)(int, int) = &reverseNumber;

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int reversedNumber = ptr(number, 0);

    printf("sum of the digits %d is: %d\n",number , reversedNumber);

    return 0;
}

// Enter a number: 456
// sum of the digit 456 is: 15