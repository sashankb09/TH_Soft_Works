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
    printf("The even numbers  from 1 to %d are\n", n);
    for (int i = 1; i <= n; i++) {
        if(i%2==0)
        printf("%d ,", (*ptr)(i)); 
       
    }
    printf("\nThe odd numbers  from 1 to %d are\n", n);
    for (int i = 1; i <= n; i++) {
        if(i%2!=0)
        printf("%d ,", (*ptr)(i)); 
       
    }
    printf("\n");
    return 0;
}
