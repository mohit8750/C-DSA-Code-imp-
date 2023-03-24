#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER A NUMBER.";
     cin >> n;
     int i;
    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NOT A PRIME";
            break;
        }
    }
    if (i == n)
    {
        cout << "IT IS A PRIME";
    }
    return 0;
}