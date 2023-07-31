#include<stdio.h>
int main()
{
    int n,i,j,k,m=1;
    printf("Enter a number to define row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            if(i==n)
            {
                if(k%2==0)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d",m++);
                }
            }
            else
            {
                printf("*");
            }
        }
        /*
        for(k=2;k<=i;k++)
        {
            printf("%d",k);
           /*
            if(i==n)
            {
                if(j%i==0)
                {
                    printf(" ");
                }
                else
                {
                    printf("%d",k);
                }
            }
            cc
        }
        */
        printf("\n");
    }
    return 0;
}