#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
  
    for ( int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
           
        }
    }
    return true;
    
}
void primeFactor(int n)

{
    if(isPrime(n)){
        cout<<1<<" "<<n;
        return ;
    } 
    
    for (int i = 2; i <sqrt(n); i++)
    {
        if (isPrime(i))
        {
            int x=i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    primeFactor(n);
    return 0;
}



/*EFFICIENT CODE
 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	for(int i=2; i*i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}
	}

	if(n > 1)
		cout<<n<<" ";

	cout<<endl;
}

MORE EFFICIENT
 void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	while(n % 2 == 0)
	{
		cout<<2<<" ";

		n = n / 2;
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";

	cout<<endl;
}