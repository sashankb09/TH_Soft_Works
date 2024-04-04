#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

union Data {
    struct Date date;
    int integerValue;
};

int main() {
    union Data data;
    data.date.day = 10;
    data.date.month = 3;
    data.date.year = 2022;
    printf("Date: %d/%d/%d\n", data.date.day, data.date.month, data.date.year);
    data.integerValue = 42;
    printf("Integer value: %d\n", data.integerValue);
}
