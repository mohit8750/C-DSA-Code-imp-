//PROGRAM TO PRINT ALL x TO END. input-cxcxcx   output-cccxxx

#include <iostream>
using namespace std;
string xtoend(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char first = s[0];
    string ans = xtoend(s.substr(1));
    if (first == 'x')
    {
        return (ans + first);
    }
    return (first + ans);
}
int main()
{
    string s;
    cin >> s;
    cout << xtoend(s);
    return 0;
}