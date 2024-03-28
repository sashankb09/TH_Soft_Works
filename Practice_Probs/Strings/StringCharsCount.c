#include <stdio.h>

void countCharacters(char *str, int *alph, int *digits, int *spec) {
    *alph = *digits = *spec = 0;
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            (*alph)++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            (*digits)++;
        }
        else if (str[i] != '\n' && str[i] != '\0' && str[i] != ' ') {
            (*spec)++;
        }
        i++;
    }
}

int main() {
    char str[30];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int alphabets, digits, special;
    countCharacters(str, &alphabets, &digits, &special);

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
