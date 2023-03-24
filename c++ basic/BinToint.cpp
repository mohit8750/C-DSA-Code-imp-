#include<iostream>
using namespace std;

int power(int x,int y)
{
    if(y==0) return 1;
    if(y==1) return x;
     int half=power(x,y/2);
     if(y%2==0){
        return half*half;
     }
     else{
        return half*half*x;
     }

}

int main()
{
    int ans=0;
    int n;
    cin>>n;
    int lastDigit=n%10;
    n=n/10;
    ans=ans+power(2,lastDigit);
    cout<< ans<<endl;

}