#include <stdio.h>

int main(){
    int n=5,nsp=0,nst=2*n-1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");

        }
        nsp++;
        nst= nst-2;
        printf("\n");
    }
      int nsp1=n-2,nst1=n-2,n1=4;
     for(int i=1;i<=n1;i++){
        for(int j=1;j<=nsp1;j++){
            
            printf(" ");
        }
        for(int k=1;k<=nst1;k++){
            printf("*");

        }
        nsp1--;
        nst1= nst1+2;
        printf("\n");
    }
}



/*output
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
*/