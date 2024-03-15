#include<stdio.h>

int main() {
    int a = 3, b = 4,c;
    int *ptr ;
    
    c=a+b;
    ptr =&c ; // Assigning the address of 'a' to 'ptr'
    printf("%d\n", *ptr);
    printf("%d", ptr); // Dereferencing ptr to print the value at the address it points to (which is 'a')

    return 0;
}
