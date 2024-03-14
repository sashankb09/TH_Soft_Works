#include <stdio.h>

void decToBin(int n) {
    if (n == 0) {
        printf("Binary: 0\n");
        return;
    }

    int bin[32];
    int i = 0;

    while (n > 0) {
        bin[i] = n & 1;
        n = n >> 1;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    decToBin(num);

    return 0;
}



// Enter a decimal number: 8
// Binary: 1000