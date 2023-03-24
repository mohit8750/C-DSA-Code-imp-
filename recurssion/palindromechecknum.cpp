#include <iostream>
using namespace std;
int palCheck(int n,int temp){
    if(n==0){
        return temp;
    }
    temp=(temp*10)+(n%10);
   return  palCheck(n/10,temp);
}
int main()
{
    int n;
    cin>>n;
    
    int temp=palCheck(n,0);
    if(n==temp){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}