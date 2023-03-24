#include <iostream>
using namespace std;
int countzero(int n)
{
    int count = 0;
    if(n==0) return 0;
    if (n > 0)
    {
        if (n % 10 == 0)
        
            count++;
           count+= countzero(n / 10);
        
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << countzero(n);
}