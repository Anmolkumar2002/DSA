#include<stdio.h>
int main()
{
    int a[50],size,pos,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElement of array is:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nFrom which position you want to delete:");
    scanf("%d",&pos);
    if(pos<=0||pos>size)
    {
        printf("Invalid position!");
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        size--;
        for(i=0;i<size;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}