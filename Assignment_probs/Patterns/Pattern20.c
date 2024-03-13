#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("enter no of lines:");
    scanf("%d", &n);
    int nsp =n-1;
    char A='A';
    char a='a';
    int nst =1;
    for(i=1; i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        for(k=1;k<=nst;k++){
            if(i%2==1){
                printf("%c", A);
            }
            else{
                printf("%c", a);
            }
        }
        A+=1;
        a+=1;
        nsp--;
        nst++;
        printf("\n");
    }
    
    return 0;
}




// enter no of lines:5
//     A
//    bb
//   CCC
//  dddd
// EEEEE