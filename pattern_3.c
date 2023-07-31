#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number to define row:");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
            /*if(i==n||j==1||i==j)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }*/
        }
        for(j=1;j<=i;j++)
        {
            /*if(i==n||j==1||i==j)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }*/
        }
        printf("\n");
    }
    return 0;
}