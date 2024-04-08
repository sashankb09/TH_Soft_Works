#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 5;
    float average;

    // Calculate the average
    average = (float)(num1 + num2) / 2; // Typecasting the sum to float

    // Print the average
    printf("The average of %d and %d is: %.2f\n", num1, num2, average);

    return 0;
}
