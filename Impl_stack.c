#include<stdio.h>
#define N 5;
int stack[5];
int top=-1;

void push()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(top==4)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow condition");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d\n",item);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d\n",stack[top]);
    }
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
    printf("\n");
}

int main()
{
    int ch;
    do{
        printf("Enter choise->\t1:push,\t2:pop,\t3:peek,\t4:display\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:push(); break;
            case 2:pop(); break;
            case 3:peek(); break;
            case 4:display(); break;
            default:printf("Invalid choice\n");
        }
    }
    while(ch!=0);
    return 0;
}