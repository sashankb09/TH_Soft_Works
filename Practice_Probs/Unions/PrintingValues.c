#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char charArray[20];
};

int main() {
    union Data data;

    data.intValue = 42;

    printf("Integer value: %d\n", data.intValue);

    data.floatValue = 3.14;

    printf("Float value: %.2f\n", data.floatValue);
    
    strcpy(data.charArray, "Hello, World!");
    printf("Character array value: %s\n", data.charArray);
}
