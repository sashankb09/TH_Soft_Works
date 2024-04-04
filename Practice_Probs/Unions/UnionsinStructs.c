#include <stdio.h>

union Values {
    int intValue;
    float floatValue;
    char charValue;
};

struct Data {
    int dataType;
    union Values value;
};

int main() {
    printf("Size of struct Data: %lu bytes\n", sizeof(struct Data));
    printf("Size of union Values: %lu bytes\n", sizeof(union Values));
}
