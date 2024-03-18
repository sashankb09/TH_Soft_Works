#include <stdio.h>

void decimal_to_binary(int decimal) {
    if (decimal > 1) {
        decimal_to_binary(decimal / 2);
    }
    printf("%d", decimal % 2);
}

int main() {
    int decimal_number;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    printf("Binary representation: ");
    decimal_to_binary(decimal_number);
    
    return 0;
}
