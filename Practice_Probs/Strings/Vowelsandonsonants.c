#include <stdio.h>

void countVowelsCons(char str[], int vowel, int cons) {
    vowel = cons = 0; // Initialize the counts
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowel++; 
            } else {
                cons++; 
            }
        }
    }
    // Print the counts
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", cons);
}

int main() {
    char str[] = "hello,boy,9";
    int vow, cons;

    // Call the function and pass variables directly
    countVowelsCons(str, vow, cons);

    return 0;
}
