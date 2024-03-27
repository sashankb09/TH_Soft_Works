#include<stdio.h>

int length(char *str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
    int (*ptr)(char *);
    ptr = &length;
    char st[100];
    printf("Enter the String:");
    scanf("%s",st);
    
    int lenthh = ptr(st); // Passing a pointer to the string
    printf("The length of string is %d", lenthh); // Printing the value, not the address
    return 0;
}
