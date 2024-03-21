#include<stdio.h>

int length(char str[]){
    int count =0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    char st[] = "Hello, world";
    int lenthh= length(st);
    printf("The length of string is %d",lenthh);
}