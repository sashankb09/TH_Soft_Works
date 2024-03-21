#include<stdio.h>

void reverse(char str[]){
    int i;
    int len =0;
    while(str[len]!='\0'){
        len++;
    }
    for(int i=0;i<len/2;i++){
        char temp = str[i];
        str[i]= str[len-i-1];
        str[len-i-1]=temp;
    }
}


int main(){
    char st[] = "Hello";
       reverse(st);
    printf("The reverse of string is %s",st);
}