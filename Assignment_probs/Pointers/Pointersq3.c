#include<stdio.h>

int main() {
    int a = 3, b = 4, c;
    int *ptr, *ptr2;
    
    ptr = &a;
    ptr2 = &b;
    
    c = *ptr2; 
    *ptr2 = *ptr; 
    *ptr = c; 
    
    printf("After swap:\n");
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
    
    return 0;
}
