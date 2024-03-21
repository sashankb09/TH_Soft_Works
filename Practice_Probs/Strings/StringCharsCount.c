#include <stdio.h>

void countCharacters( char *str, int *alph, int *digits, int *spec) {
    *alph = *digits = *spec = 0;
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            (*alph)++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            (*digits)++;
        }
        else {
            (*spec)++;
        }
        i++;
    }
}

int main() {
    char str[]="hello,boy,9";
    int alphabets, digits, special;

    // printf("Enter a string: ");
    // scanf("%[^\n]", str);
    

    countCharacters(str, &alphabets, &digits, &special);

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
