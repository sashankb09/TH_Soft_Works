#include<stdio.h>

void reverse(char *str){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    for(int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main(){
    void (*ptr)(char *);
    ptr = &reverse;
    char st[20];
    printf("Enter the String:");
    scanf("%s",st);
    printf("The original string is %s\n",st);
    ptr(st);
    printf("The reverse of string is %s", st);
    return 0;
}
