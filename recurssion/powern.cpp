//power of n raise to x
#include<iostream>
using namespace std;
int power(int n,int x){
    if(x==0) {
        return 1;
        }
    return n* power(n,x-1);
}
int main(){
    int n,x;
    cin>>n>>x;
    cout<<power(n,x);
    return 0;
}