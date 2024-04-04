#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        return reverseNumber(num / 10, reversedNum * 10 + num % 10);
    }
}

int main() {
    int (*ptr)(int, int) = &reverseNumber;

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int reversedNumber = ptr(number, 0);

    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}


// Enter a number: 24
// Reversed number: 42