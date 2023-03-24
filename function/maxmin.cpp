#include<iostream>
using namespace std;
void max(int x, int y, int z)

{
    if(x>y){
        if(x>z){
            cout<<x<<"is MAX"<<endl;
        }
        else{
            cout<<z<<"is max"<<endl;
        }
            
        
    }
    else{
        if(y>z){
            cout<<x<<"is max"<<endl;
        }
        else{
            cout<<z<<"is max"<<endl;
        }
    }

      return ;
}


int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int ans=max(int x,int  y, int z);
    cout<<ans;
}