#include<iostream>
using namespace std;
void pairstar(string s){
    if(s.length()==0) return ;
    if(s[0]==s[1]){
        cout<<s[0]<<"*"<<s[1];
        pairstar(s.substr(2));
    }
    else{
        cout<<s[0];
        pairstar(s.substr(1));
    }
}
int main(){
    string s;
    cin>>s;
    pairstar(s);

}