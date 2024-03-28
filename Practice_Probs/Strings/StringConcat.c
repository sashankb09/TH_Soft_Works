#include <stdio.h>

void concatStrings( char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') {
        result[i + j] = str2[j];
        j++;
    }
    result[i + j] = '\0';
}
int length(char *str){
    int size=0;
    while (str[size]!='\0')
    {
        size++;
    }
    return size;
    
}

int main() {

    char str1[] = "Hello, ";
    printf("enter the first string: ");
    scanf("%s",str1);
    char str2[] = "world!";
     printf("enter the second string: ");
    scanf("%s",str2);
    char result[20];

    concatStrings(str1, str2, result);
    int len =length(result);

    printf("Concatenated string: %s\n", result);
    printf("length of Concatenated string is %d",len);

    return 0;
}


// enter the first string: hello
// enter the second string: sasi
// Concatenated string: hellosasi
// length of Concatenated string is 9