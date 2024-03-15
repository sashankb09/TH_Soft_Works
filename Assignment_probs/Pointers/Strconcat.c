#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    char *ptr = str1;
    while (*ptr != '\0') {
        ptr++;
    }

    char *src_ptr = str2;
    while (*src_ptr != '\0') {
        *ptr = *src_ptr;
        ptr++;
        src_ptr++;
    }
    *ptr = '\0';
    printf("The concatenated string is: %s\n", str1);
    
    return 0;
}
