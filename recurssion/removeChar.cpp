

#include <iostream>
using namespace std;

string removechar(string s, char c1, char c2)
{
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == c1)
    {
        s[0] = c2;
    }
    string ans = s[0] + removechar(s.substr(1), c1, c2);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    char c1;
    char c2;
    cin >> c1 >> c2;
    cout << removechar(s, c1, c2);
}