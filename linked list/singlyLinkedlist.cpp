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


//for inserting at beginning
node *insertbegin(node *head, int x)
{
    node *temp = new node(x);
    temp->next = head;
    return temp;
}


//for inserting at end
node *insertEnd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
        return temp;
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}


//for deleting head
node *deleteHead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else
    {
        node *temp = head->next;
        delete head;
        return temp;
    }
}


//for deleting last
node *dellast(node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

// INSERT AT ANY POSITION IN LINKED LIST


node *insertatanyPos(node *head, int pos, int data)
{
    node *temp = new node(data);
    // if we want to insert at first position
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr->next == NULL)
    {
        return head;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}



// SEARCH IN A LINKED LIST
int iterativeSearch(node *head, int x)
{
    int pos = 1;
    node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        else
        {
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}



// RECURSSIVE SEARCH
int recursiveSearch(node *head, int x)
{
    if (head == NULL)
        return -1;

    if (head->data == x)
    {
        return 1;
    }
    else
    {
        int res = recursiveSearch(head->next, x);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return(res + 1);
        }
    }
}





// recursive print
void rprint(node *head)
{
    if (head == NULL)
        return;
    else
    {
        cout << (head->data) << " ";
    }
    rprint(head->next);
}



void printlist(node *head)
{
    node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    printlist(head);
    cout << endl;
    head = insertbegin(head, 40);
    head = insertEnd(head, 50);

    printlist(head);
    cout << endl;

    head = deleteHead(head);
    printlist(head);
    cout << endl;

    head = dellast(head);
    printlist(head);
    cout << endl;

    head = insertatanyPos(head, 2, 70);
    printlist(head);
    cout << endl;

    cout << iterativeSearch(head, 30);
   

    cout << endl;
    cout << recursiveSearch(head,20);
}
