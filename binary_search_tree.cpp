#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;


    node(int d)
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void levelorderTraversal(node* root)
{
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp -> data << " ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }
    }
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    else
    {
        inorder(root -> left);
        cout << root -> data << " ";
        inorder(root -> right);
    }
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    else
    {
        cout << root -> data << " ";
        preorder(root -> left);
        preorder(root -> right);
    }
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }
    else
    {
        postorder(root -> left);
        postorder(root -> right);
        cout << root -> data << " ";
    }
}

node* insertIntoBST(node *root, int d) {
    if(root == NULL) {
        root = new node(d);
        return root;
    }

    if(d > root -> data) {
        root -> right = insertIntoBST(root -> right, d);
    }
    else {
        root -> left = insertIntoBST(root -> left , d);
    }
    return root;
}

void takeInput(node* &root) {
    int data;
    cin >> data;

    while(data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main() {
    node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Printing the BST" << endl;
    levelorderTraversal(root);

    cout << "Printing the inorder" << endl;
    inorder(root);

    cout << endl << "Printing the preorder" << endl;
    preorder(root);

    cout << endl << "Printing the postorder" << endl;
    postorder(root);
    return 0;
}