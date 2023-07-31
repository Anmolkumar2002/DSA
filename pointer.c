#include<stdio.h>
int main()
{
    int a[]={6,2,1,5,3};
    int *q=a;
    //q=a;
    printf("x=%p\n",a);//Array itself act as a pointer
    printf("x=%p\n",a+1);
    printf("x=%p\n",&a);//Array itself act as a pointer
    printf("x=%p\n",&a+1);
    printf("x=%p\n",q);
    printf("x=%p\n",&q);
    printf("x=%d\n",a[2]);
    printf("x=%d\n",2[a]);
    printf("x=%d\n",*(a+2));
    printf("x=%d\n",*(q+1));
    q++;
    printf("x=%d\n",*(q+1));
    printf("x=%d\n",*(a+1));
     printf("x=%d\n",(*a+1));
    return 0;
}