#include <stdio.h>

void countZerosOnes(int num) {
    int zeros = 0, ones = 0;
    
    while (num != 0) {
        if (num & 1)
            ones++;
        else
            zeros++;
        num >>= 1; // Right shift to check the next bit
    }

    printf("Number of zeros: %d\n", zeros);
    printf("Number of ones: %d\n", ones);
}

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    countZerosOnes(num);

    return 0;
}
/*

*/