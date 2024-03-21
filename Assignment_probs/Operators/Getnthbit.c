#include <stdio.h>

int get_nth_bit(int num, int n) {
    return (num >> n) & 1;
}

int main() { 
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position (0-indexed): ");
    scanf("%d", &n);

    if (n < 0 || n >= sizeof(int) * 8) {
        printf("Invalid bit position.\n");
        return 1;
    }

    int nth_bit = get_nth_bit(num, n);

    printf("The %dth bit of %d is %d.\n", n, num, nth_bit);

    return 0;
}
/*
Enter a number: 4
Enter the bit position (0-indexed): 2
The 1th bit of 4 is 1.
*/