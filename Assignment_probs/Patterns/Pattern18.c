#include <stdio.h>
int main()
{
    int n;
    printf("Enter the lines (n): ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d ",2*i-1);
        }
        printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%d ",2*(n-i+1));
        }
        printf("\n");
    }
    return 0;
}



// Enter the lines (n): 5
// 1 
// 3 3 
// 5 5 5 
// 7 7 7 7 
// 9 9 9 9 9 
// 8 8 8 8 
// 6 6 6 
// 4 4 
// 2 
