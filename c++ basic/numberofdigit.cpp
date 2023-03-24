#include<iostream>
#include <limits.h>
using namespace std;
int totalDigit(int n){
     int count=0;
    while(n>0){
       
        n=n/10;
        count++;
    }
    return count;
}

//recurssive solution
#include <bits/stdc++.h>
using namespace std;
 
int countDigit(long long n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

int main(){
    int n;
    cin>>n;
    cout<<totalDigit(n)<<endl;
    return 0;
}