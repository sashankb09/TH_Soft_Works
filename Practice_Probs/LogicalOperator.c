#include <stdio.h>

int main() {
    int a = 8, b = 4, c = 10;
    if (a > b && a < c) { // Logical AND (&&)
        printf("a is between b and c\n");  // Output: a is between b and c
    }
    return 0;
}

#include <stdio.h>

int main() {
    int age = 30;
    if (age < 25 || age > 50) { // Logical OR (||)
        printf("You are either too young or too old\n");  // Output: You are either too young or too old
    }
    return 0;
}

#include <stdio.h>

int main() {
    int flag = 1;
    if (!flag) { // Logical NOT (!)
        printf("flag is false\n");  // Output: flag is false
    }
    return 0;
}
