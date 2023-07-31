#include<stdio.h>
int main()
{
    int a[50],size,num,pos,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element of array is:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the number you want to insert:");
    scanf("%d",&num);
    printf("\nWhich position do you want to store:");
    scanf("%d",&pos);
    if(pos<=0||pos>size+1)
    {
        printf("\nInvalid position");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}