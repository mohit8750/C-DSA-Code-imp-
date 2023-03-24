#include <iostream>
using namespace std;
#include <math.h>
#include<queue>
#include<stack>

// structure of a tree
struct node
{
    int key;
    node *left;
    node *right;

    node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};
/*
node *buildTree(node*root){
    int n;
    cin>>n;
    root=new node(n);
    if(n==-1){
        return NULL;
    }
    cout<<"ENTER FOR LEFT"<<endl;
    root->left=buildTree(root->left);
    cout<<" ENTER FOR RIGHT"<<endl;
    root->right=buildTree(root->right);
    return root;
}
*/
// INORDER TRAVERSEL
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << (root->key) << " ";
    inorder(root->right);
}
// PREORDER TRAVERSEL
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << (root->key) << " ";
    preorder(root->left);
    preorder(root->right);
}
// POSTORDER TRAVERSAL
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << (root->key) << " ";
}

// HEIGHT OF THE BINARY TREE
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}
// PRINT NODES AT DISTANCE K
void printnodeatk(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
    {
        cout << (root->key) << " ";
    }
    else
    {
        printnodeatk(root->left, k - 1);
        printnodeatk(root->right, k - 1);
    }
}

// LEVEL ORDER TRAVERSAL
void printlevel(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}


void Iteinorder(node*root){
    stack<node*> s;
    node*curr=root;
    
    while(curr!=NULL || s.empty()==false){
        while(curr!=NULL){
            s.push(curr);
        curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;

    }
}

void Itepreorder(node*root){
    stack<node*>s;
    
    s.push(root);
    while( s.empty()==false){
        node*curr=s.top();
         s.pop();
        cout<<curr->key<<" ";
       
        if(curr->right){
            s.push(curr->right);
        }
        if(curr->left){
            s.push(curr->left);
        }
    }
}


void Itepostorder(node*root){
    stack<node*>s;
    node*curr=root;
    while(curr!=NULL){
        
    }
}

int main()
{
  
     node *root = new node(10);
     
     root->left = new node(20);
     root->right = new node(30);

    inorder(root);
    cout << endl;

    Iteinorder(root);
    cout<<endl;

    preorder(root);
    cout << endl;

    Itepreorder(root);
    cout << endl;

    postorder(root);
    cout << endl
         << height(root) << endl;

    printnodeatk(root, 1);
    cout<<endl;

    printlevel(root);
}