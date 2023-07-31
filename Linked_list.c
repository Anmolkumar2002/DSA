/*
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    //struct node *head, *second, *third;
    struct node *head;
    struct node *second;
    struct node *third;

    // Allocate memory for nodes in the linked list in Heap
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    // Linked 1st and 2nd nodes
    head->data=7;
    head->next=second;

    // Linked 2nd and 3rd nodes
    second->data=9;
    second->next=third;

    // Terminate the list at the third node
    third->data=8;
    third->next=NULL;
                                                                                                                                                                                                   
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}; 
int main()
{
    struct node *head,*newnode,*temp;
    head=0;
    int choice,count=0;
    while(choice)
    {
        newnode=(struct node *) malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue(0,1)?:");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
        count ++;
    }
    printf("\nHow many number:%d",count);
    return 0;
}