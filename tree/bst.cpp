#include <iostream>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};

bool search(node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->key == x)
    {
        return true;
    }
    else if (root->key > x)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
// RECURSSIVE INSERT
node *insertRec(node *root, int x)
{
    if (root == NULL)
    {
        return new node(x);
    }
    else if (root->key > x)
    {
        root->left = insertRec(root->left, x);
    }
    else
    {
        root->right = insertRec(root->right, x);
    }
    return root;
}

// ITERATIVE INSERT
node *insertIter(node *root, int x)
{
    node *temp = new node(x);
    node *parent = NULL;
    node *curr = root;
    while (curr != NULL)
    {
        parent = curr;
        if (curr->key > x)
        {
            curr = curr->left;
        }
        else if (curr->key < x)
        {
            curr = curr->right;
        }
        else
        {
            return root;
        }
    }
    if (parent == NULL)
    {
        return temp;
    }
    if (parent->key > x)
    {
        parent->left = temp;
    }
    else
    {
        parent->right = temp;
    }
    return root;
}

 




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

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    inorder(root);
    cout<<endl;
    
    
   root= insertIter(root, 40);
    inorder(root);
    cout<<endl;
   
   
    cout << search(root, 10);
    cout<<endl;


 
}