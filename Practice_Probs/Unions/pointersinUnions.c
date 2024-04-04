#include <stdio.h>

union Data {
    int *intPtr;
    float *floatPtr;
    char *charPtr;
};

int main() {
    union Data data;
    int intValue = 10;
    float floatValue = 3.14;
    char charValue = 'A';

    data.intPtr = &intValue;
    data.floatPtr = &floatValue;
    data.charPtr = &charValue;


    printf("Integer value through pointer: %d\n", *(data.intPtr));
    printf("Float value through pointer: %.2f\n", *(data.floatPtr));
    printf("Character value through pointer: %c\n", *(data.charPtr));
}
