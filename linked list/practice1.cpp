#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int x){
        data=x;
        next=NULL;
    }
};

void print(node*head){
    node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    node*head=new node(10);
    head->next= new node(20);
    head->next->next=new node(30);
    print(head);
}