#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int max,min;
    if(x>y){
        max=x;
        min=y;
    }
    else{
        min=x;
        max=y;
    }
    cout<<"MAX IS"<<max<<endl;
    cout<<"MIN IS"<<min<<endl;
    return 0;
}

