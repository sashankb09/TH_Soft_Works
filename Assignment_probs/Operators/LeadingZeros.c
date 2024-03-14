#include <stdio.h>
#define size 4
int main() {
    int num;
    printf("Enter a number in binary: ");
    scanf("%d", &num);

    int zeros = countLeadingZeros(num);
    printf("Number of leading zeros: %d\n", zeros);

    return 0;
}
int countLeadingZeros(int num) {
    int count = 0;
    
    
    for (int i = size - 1; i >= 0; i--) {
        if ((num >> i) & 1) // Check if the i-th bit from left is set
            break;
        count++;
    }
    
    return count;
}


/*
Enter a number in binary: 0010
Number of leading zeros: 2
*/