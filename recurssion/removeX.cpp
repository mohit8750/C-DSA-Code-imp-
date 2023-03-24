#include<iostream>
using namespace std;
string removeX(string s){
    if(s.length()==0) return "" ;
    if(s[0]=='x') {
        
         return removeX(s.substr(1));
    }
    else {
        cout<<s[0];
        return removeX(s.substr(1));
    }
}
int main(){
    string s;
    cin>>s;
    removeX(s);
}