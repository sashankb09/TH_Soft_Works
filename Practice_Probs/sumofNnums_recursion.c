#include<stdio.h>

int nat(int n) {
    if(n <= 0) {
        return 0; 
    } else {
        return n; 
    }
}
int main() {
    int (*ptr)(int) = &nat; 
    int n = 50;
    int sum = 0;
    
    printf("The natural numbers from 1 to %d are ", n);
    for (int i = 1; i <= n; i++) {
        sum += (*ptr)(i); 
    }
    
    printf(" %d\n",sum); 
    printf("\n");
    return 0;
}


// The natural numbers from 1 to 50 are  1275