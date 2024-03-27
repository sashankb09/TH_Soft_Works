// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello, world!";
//     int length = strlen(str);
//     printf("Length of the string: %d\n", length);
//     return 0;
// }


// ------------------------


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char source[] = "Hello, world!";
//     char destination[20];
//     strcpy(destination, source);
//     printf("Copied string: %s\n", destination);
//     return 0;
// }

// -------------------


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello";
//     char str2[] = " world!";
//     strcat(str1, str2);
//     printf("Concatenated string: %s\n", str1);
//     return 0;
// }


// --------------

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     int result = strcmp(str1, str2);
//     if (result == 0) {
//         printf("Strings are equal.\n");
//     } else {
//         printf("Strings are not equal.\n");
//     }
//     return 0;
// }


// ----------------


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello, world!";
//     char *ptr = strchr(str, 'o');
//     if (ptr != NULL) {
//         printf("Found 'o' at position: %ld\n", ptr - str);
//     } else {
//         printf("'o' not found in the string.\n");
//     }
//     return 0;
// }


// -------------------

// // Finds the first occurrence of a substring in a string:

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Hello, world!";
//     char *ptr = strstr(str, "world");
//     if (ptr != NULL) {
//         printf("Found 'world' at position: %ld\n", ptr - str);
//     } else {
//         printf("'world' not found in the string.\n");
//     }
//     return 0;
// }


// ------------------

// // Splits a string into tokens based on a delimiter


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! How are you?";
    char token = strtok(str, ",!");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",!");
    }
    return 0;
}
