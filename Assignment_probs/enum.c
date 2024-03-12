#include <stdio.h>

// Define an enumeration for weekdays
enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main() {
    // Declare a variable of type Weekday
    enum Weekday today = 2;

    // Print the name of the current weekday
    switch (today) {
        case MONDAY:
            printf("It's Monday!\n");
            break;
        case TUESDAY:
            printf("It's Tuesday!\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday!\n");
            break;
        case THURSDAY:
            printf("It's Thursday!\n");
            break;
        case FRIDAY:
            printf("It's Friday!\n");
            break;
        case SATURDAY:
            printf("It's Saturday!\n");
            break;
        case SUNDAY:
            printf("It's Sunday!\n");
            break;
        default:
            printf("Invalid day!\n");
    }

    return 0;
}
