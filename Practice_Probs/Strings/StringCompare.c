#include <stdio.h>

void Strcomp(char str[], char str2[]) {
    int i;
    for (i = 0; str[i] != '\0' && str2[i] != '\0'; i++) {
       if(str[i] != str2[i]) {
           printf("The strings are not equal\n");
           break;
       }
    }
    if (str[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }
}

int main() {
    char st[] = "Hello";
    char st2[]="Hello";  
    
     Strcomp(st, st2);

    // for (int i = 0; i < size; i++) {
    //     printf("%c", st2[i]);
    // }
    
    // printf("\n");
}
