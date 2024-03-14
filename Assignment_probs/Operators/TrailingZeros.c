#include <stdio.h>
int main() {
    int num;
    printf("Enter a number in binary: ");
    scanf("%d", &num);

    int zeros = countTrailingZeros(num);
    printf("Number of trailing zeros: %d\n", zeros);

    return 0;
}



int countTrailingZeros(int num) {
    if (num == 0)
        return sizeof(num) * 8; 

    int count = 0;
    while ((num & 1) == 0) {
        count++;
        num >>= 1;
    }
    return count;
}



/*
Enter a number in binary: 1010
Number of trailing zeros: 1
*/