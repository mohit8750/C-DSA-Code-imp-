#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    int check = max(a, b);
    while (true)
    {
        if (check % a == 0 && check % b == 0)
        {
            return check;
        }
        check++;
    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    return 0;
}

/* efficient code
int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main() {
    
    	int a = 4, b = 6;
    	
    	cout<<lcm(a, b);
    	
    	return 0;
}