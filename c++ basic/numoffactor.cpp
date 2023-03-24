#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout << "ENTER A NUMBER"<<endl;
    cin >> n;
    for (int i = 1; i <=sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                cout << i<<" ";
            }
            else
            {
                cout << i<<" " << n / i<<" ";
            }
        }
    }
    return 0;
}