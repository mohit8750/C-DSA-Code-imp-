#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER A NO. UPTO YOU WANT TO PRINT PRIME NO.";
    cin >> n;
   int i;
    for (  i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if(i==n){
        cout<<i<<" ";
    }
    return 0;
}