#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("The least significant bit (LSB) of %d is set.\n", num);
    } else {
        printf("The least significant bit (LSB) of %d is not set.\n", num);
    }
    
    return 0;
}


/*
Enter a number: 4
The least significant bit (LSB) of 4 is not set.
*/