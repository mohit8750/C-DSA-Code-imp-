#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER A NUMBER U WANT TO FIND FACTORIAL"<<endl;
    cin>>n;
   int factorial=1;
   for(int i=1;i<=n;++i){
       factorial*=i;

   }
   cout<<factorial;

    
    return 0;
}