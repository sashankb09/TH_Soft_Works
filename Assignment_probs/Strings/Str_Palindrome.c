#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome( char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    bool (*ptr)(char *);
    ptr = &isPalindrome;
    if (ptr(str)) {
        printf("The given string '%s' is a palindrome\n", str);
    } else {
        printf("The given string '%s' is not a palindrome\n", str);
    }

    return 0;
}
