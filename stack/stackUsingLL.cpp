#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct mystack
{
    node *head;
    int sz;
    mystack()
    {
        head = NULL;
        sz = 0;
    }

    void push(int x)
    {
        node *temp = new node(x);
        temp->next = head;
        head = temp;
        sz++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }
        int res = head->data;
        node *temp = head;
        head = head->next;
        delete temp;
         sz--;
        return res;
       
    }

    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return (head == NULL);
           
    }

    int peek()
    {
        if (head == NULL)
        {
            return -1;
        }
        return head->data;
    }
};



int main(){
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
     s.push(40);
   
   
   
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;

   }
