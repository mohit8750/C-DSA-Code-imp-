#include<iostream>
#include<utility>
using namespace std;
/*
int main()
{
    pair<int,int>p1(10,20);
    pair<int,string>p2(10,"mohit");
    cout<<p1.first<<" "<<p1.second;
     cout<<p2.first<<" "<<p2.second;
     return 0;
}
*/


//COMPARISON IN PAIR
int main(){
    pair<int,int>p1(1,12),p2(9,12);
    cout<<(p1==p2)<<endl;
       cout <<(p1!=p2)<<endl;
       cout <<(p1>p2)<<endl;
        cout<<(p1<p2)<<endl;
}