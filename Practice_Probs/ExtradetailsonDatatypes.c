#include <stdio.h>
int main() {
    int maxInt = 2147483647; // Maximum value for int
    maxInt = maxInt + 1;     // Causes overflow and negative value will be printed
    printf("Negative value: %d\n", maxInt);

    int intValue = 3.14; // fractional part will not be printed
    printf("Loss of Precision: %d\n", intValue);

    int intResult = 5 / 2.0; // Result is 2.5 not 2 beacuse of impilicit type conversion
    printf("Implicit Type Conversion: %d\n", intResult);
    
      return 0;  
}


