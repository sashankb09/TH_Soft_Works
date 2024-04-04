#include <stdio.h>

union Data {
    int num;
    float dec;
    char text[20];
};

int main() {
    union Data data;
    data.num = 42;
    printf("Number value: %d\n", data.num);


    data.dec = 3.14;
    printf("Decimal value: %.2f\n", data.dec);

    strcpy(data.text, "Hello, World!");
    printf("Text value: %s\n", data.text);
}
