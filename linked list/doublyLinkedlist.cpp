#include <iostream>
using namespace std;
struct node
{
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
void printlist(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

node *insertBegin(node *head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    if (head != NULL)

        head->prev = temp;
    return temp;
}


node*insertEnd(node *head,int data){
    node*temp=new node(data);
    if(head==NULL)
           return temp;
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}



 node *delHead(node *head){
    if(head==NULL)
         return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}

node *delLast(node *head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    return head;

}


int main()
{
    node *head = new node(10);
    node *temp1 = new node(20);
    node *temp2 = new node(30);
    head->next = temp1;
    head->prev = NULL;
    temp1->next = temp2;
    temp2->next = NULL;
    printlist(head);

    head = insertBegin(head, 5);
     printlist(head);

    head=insertEnd(head,40);
    printlist(head);

    head=delHead(head);
    printlist(head);

    head=delLast(head);
    printlist(head);


}
