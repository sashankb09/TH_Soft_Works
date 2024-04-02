#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};
struct Person {
    char name[50];
    int age;
    struct Date birth_date; 
};

int main() {
    struct Date date_of_birth = {10, 5, 1990};
    struct Person person1 = {"John Doe", 30, date_of_birth};

    printf("Person's name: %s\n", person1.name);
    printf("Person's age: %d\n", person1.age);
    printf("Person's date of birth: %d/%d/%d\n", person1.birth_date.day, person1.birth_date.month, person1.birth_date.year);

    return 0;
}
