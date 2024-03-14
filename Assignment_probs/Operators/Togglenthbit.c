#include <stdio.h>

int toggle_nth_bit(int num, int n) {
    int mask = 1 << n;

    return num ^ mask;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to toggle (0-indexed): ");
    scanf("%d", &n);

    if (n < 0 || n >= sizeof(int) * 8) {
        printf("Invalid bit position.\n");
        return 1;
    }
    int new_num = toggle_nth_bit(num, n);

    printf("Number after toggling the %dth bit: %d\n", n, new_num);

    return 0;
}
/*
Enter a number: 5
Enter the bit position to toggle (0-indexed): 2
Number after toggling the 2th bit: 1
*/