#include <iostream>
using namespace std;
int trailingZero(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    int count = 0;

    if (fact % 10 == 0)
    {
        count++;
        fact = fact / 10;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << trailingZero(n) << endl;
    return 0; 
}

/*efficient code
 int countTrailingZeros(int n)
{
	int res = 0;

	for(int i=5; i<=n; i=i*5)
	{
		res = res + (n / i);
	}

	return res;
}
int main() {
    
    	int number = 251;
    	
    	cout<<countTrailingZeros(number);
    	
    	return 0;
}  


 */