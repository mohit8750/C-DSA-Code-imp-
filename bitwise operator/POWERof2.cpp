#include <iostream>
using namespace std;

bool poweroftwo(int n)
{
    while (n > 0)
    {    
       cout<<n;
       if(n==0) return false;
       if(n==1){
        return true;
        }
        if (n % 2 != 0)
        {
           
            return false;
            
        }
         n = n / 2;
    }
    return true;
}

//MORE EFFICIENT

bool isPow2(int n)
{
    if (n == 0)
        return true;

    return ((n & (n - 1)) == 0);
}

int main()
{
    int n;
   cin>>n;
    if (poweroftwo(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}