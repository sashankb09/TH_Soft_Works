#include<stdio.h>

int evenorodd(int n) {
    if(n <= 0) {
        return 0; 
    } else {
        return n; 
    }
}

int main() {
    int (*ptr)(int) = &evenorodd; 
    int n = 50;
    int odd=0 ;
    int even =0;
    printf("The sum of even numbers  from 1 to %d are ", n);
    for (int i = 1; i <= n; i++) {
        if(i%2==0)
        even+=(*ptr)(i);
    }
    printf("%d\n ",even);

    printf("\nThe sum of odd numbers  from 1 to %d are ", n);
    for (int i = 1; i <= n; i++) {
        if(i%2!=0)
        odd+=(*ptr)(i);
    }
    printf("%d ",odd);
    printf("\n");
    return 0;
}


// The sum of even numbers  from 1 to 50 are 650
 
// The sum of odd numbers  from 1 to 50 are 625 
