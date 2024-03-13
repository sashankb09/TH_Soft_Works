#include <stdio.h>

int main() {
    int i, k, n;
    printf("enter no of lines:");
    scanf("%d", &n);
    
    for(i=n; i>=1;i--){
        
        for(k=1;k<=i;k++){
            printf("*");
        }
       
        printf("\n");
    }
    
    return 0;
}


/*
enter no of lines:5
*****
****
***
**
*
*/