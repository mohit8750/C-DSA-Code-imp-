#include<iostream>
using namespace std;
int multiply(int n,int m){
    if(m==0) return 0;

    int ans=n+multiply(n,m-1);
    return ans;

}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<multiply(n,m);
}