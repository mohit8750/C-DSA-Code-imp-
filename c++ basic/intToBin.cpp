#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    while(n>0)
    {
        int x=n%2;
        s.push_back((char)x+'0');
        n=n/2;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}