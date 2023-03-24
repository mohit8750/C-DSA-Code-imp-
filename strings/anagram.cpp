#include <iostream>
using namespace std;

bool anagram(string s1, string s2)
{
    const int CHAR = 256;
    int count[CHAR] = {0};
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]+=1;
        count[s2[i]]--;
    }
    for (int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(anagram(s1,s2)) {
        cout<<"this string is anagram";
    }
    else{
        cout<<"this is not an anagram";
    }
    return 0;
}