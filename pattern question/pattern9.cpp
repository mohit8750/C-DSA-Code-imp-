#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int i = 1;
    char count= 'A';
    while (i <= n)
    {
        int j = 1;
      
        while (j <= n)
        {
            cout <<count;
            j++;
             
        }
        cout << endl;
      count++;
        i++;
    }
}