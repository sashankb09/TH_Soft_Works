#include <stdio.h>

union Values {
    int integerVal;
    float floatVal;
};

void printUnionByValue(union Values data) {
    printf("Value of the union (passed by value): %d\n", data.integerVal);
}



int main() {
    union Values myValues;
    myValues.floatVal = 3.14;
    printUnionByValue(myValues);
}
