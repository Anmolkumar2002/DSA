#include<stdio.h>
int main()
{
    int a[5],i;
    int *q=a;
    printf("Enter the element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&q[i]);
    }
    printf("Element:");
    for(i=0;i<5;i++)
    {
        scanf("%d\t",&a[i]);
    }
    return 0;
}