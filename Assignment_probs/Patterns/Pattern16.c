#include <stdio.h>

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("   ");
        }
        for(int k=1;k<=2*(i)-1;k++)
        {
            printf("%d ",k-i);
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("   ");
        }
        for(int k=1;k<=2*(n-(i-1))-1;k++)
        {
           printf("%d ",-n+(k+i-1));
        }
        printf("\n");
    }
    return 0;
}




//             0 
//          -1 0 1 
//       -2 -1 0 1 2 
//    -3 -2 -1 0 1 2 3 
// -4 -3 -2 -1 0 1 2 3 4 
//    -3 -2 -1 0 1 2 3 
//       -2 -1 0 1 2 
//          -1 0 1 
//             0 
