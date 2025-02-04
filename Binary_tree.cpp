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

node* buildTree(node* root)
{
    int data;
    cout << "Enter the data:";
    cin >> data;
    root = new node(data);
    if(data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for inserting in right of " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}


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

int height(node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left, right);
    return ans;
}

int main()
{
    node* root = NULL;

    // creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 8 -1 -1 5 9 -1 -1 10 -1 -1 

    //level order
    cout << "Printing level order traversal output" << endl;
    levelorderTraversal(root);

    //inorder traversal
    cout << "inorder traversal is :";
    inorder(root);
    cout << endl;

    //preorder traversal
    cout << "preorder traversal is :";
    preorder(root);
    cout << endl;

    //postorder traversal
    cout << "postorder traversal is :";
    postorder(root);
    cout << endl; 

    //Height of tree
    cout << "Height of tree:"<< height(root);
    return 0;
}