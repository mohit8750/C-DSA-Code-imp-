#include <iostream>
using namespace std;

struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c)
    {
        cap = c;
        top = -1;
        arr = new int(cap);
    }

    void push(int x)
    {
        if (top == cap - 1)
        {
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek()
    {
        if (top == -1)
        {
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    /*
    void print(top){
            while(top==-1){
                cout<<arr[top]<<" ";
                top--;
            }
            */

};

int main()
{
    mystack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
   //s.print(top);

    cout << s.pop() << endl;
    cout << s.peek() << endl;

    cout<<s.isEmpty()<<endl;
    cout<<s.size();
}
