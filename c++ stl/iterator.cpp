#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5,6};
    vector<int>::iterator i=v.begin();     //auto i (we also use this )
    cout<<*i<<" ";
    i++;
    cout<<*i<<" ";
   
   
   
    i=next(i);
    cout<<*i<<" ";
    i=next(i,2);
    cout<<*i<<" ";

    i=prev(i);
    cout<<*i<<" ";
    i=prev(i,2);
    cout<<*i<<" ";

   
   
    i=v.end();
    i--;
    cout<<*i<<" ";
}