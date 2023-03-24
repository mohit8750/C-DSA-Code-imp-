#include<iostream>
using namespace std;



int fact(int n)
{
  
   
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}




int main()
{

  int n,r;
  
  cout<<"ENTER THE VALUE OF n and r"<<endl;
  cin>>n>>r;
  int ans= fact(n)/(fact(r)*fact(n-r));
  cout<<ans<<endl;
  return 0;
  
}