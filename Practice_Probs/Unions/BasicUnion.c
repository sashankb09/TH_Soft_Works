#include <stdio.h>


union Data {
    int intValue;
    float floatValue;
    char charArray[20];
};

int main() {
    printf("Size of int member: %lu bytes\n", sizeof(int));
    printf("Size of float member: %lu bytes\n", sizeof(float));
    printf("Size of char array member: %lu bytes\n", sizeof(char[20]));
    printf("Size of union Data: %lu bytes\n", sizeof(union Data));

    return 0;
}
