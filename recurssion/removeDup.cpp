
//You are given a string ‘str’ of size ‘N’. Your task is to remove consecutive duplicates from this string recursively.
#include <iostream>
using namespace std;

string removeDuplicate(string &s)
{
    if(s.length()==0) return "";
    char first = s[0];
    string sub = s.substr(1);
    string ans = removeDuplicate(sub);
    if(first==ans[0]){
        return ans;
    }
 
        return (first+ans);
    
}
int main(){
    string s;
    cin>>s;
    cout<<removeDuplicate(s);
    return 0;
}
