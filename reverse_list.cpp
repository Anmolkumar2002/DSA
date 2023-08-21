#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* reverseLinkedlist(Node* &head)
{
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    
    //print(head);

    insertAtHead(head, 12);
    insertAtHead(head, 5);
    insertAtHead(head, 15);
    insertAtHead(head, 17);
    print(head);

    reverseLinkedlist(head);
    print(head);

    return 0;
}