
//PROGRAM TO CHECK A STRING IS PALINDROME OR NOT.
#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end)
{

    if (start >= end){
        return true;
    }
     if(s[start] != s[end]){
         return false;
     }
    return isPalindrome(s, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    int len=s.length();
    int start = 0;
    int end = len-1;
    if (isPalindrome(s,start,end))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}