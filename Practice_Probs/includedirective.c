#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    int p = 4;

    int q = sqrt(p);
    printf("The square root is %lf\n", q);
    
    // Concatenate str2 to str1
    strcat(str1, str2);

    // Print the concatenated string
    printf("%s\n", str1);

    // Get the length of the concatenated string
    size_t length = strlen(str1);
    printf("Length of the concatenated string: %zu\n", length);

    return 0;
}