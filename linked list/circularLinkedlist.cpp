#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

//NAIVE SOLM TO INSERT AT BEGGINING
Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

//EFFICIENT SOLN(here we insert the node after head then swap )
Node *insertBegineff(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        //swapping
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
}


//NAIVE
Node *insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
        return head;
    }
}
//EFFICIENT SOLN
Node *insertEndeff(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
    }
}


//NAIVE
Node *delHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while (curr->next != head)
        curr = curr->next;
    curr->next = head->next;
    delete head;
    return (curr->next);
}

//EFFICIENT SOLN
Node *delHeadeff(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

//DELETE KTH ELEMENT
Node*deletekth(Node*head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        return delHeadeff(head);
    }
    Node*curr=head;
    for(int i=0;i<k-2;i++)
         curr=curr->next;
         Node*temp=curr->next;
         curr->next=curr->next->next;
         delete temp;
         return head;
}



void printlist(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
        cout << p->data << " ";
        cout<<endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);
    head->next->next->next->next = head;
    printlist(head);

    head=insertBegineff(head,30);
    printlist(head);

    head=insertEndeff(head,40);
    printlist(head);

    head=delHeadeff(head);
    printlist(head);

    head=deletekth(head,2);
    printlist(head);


  
}
