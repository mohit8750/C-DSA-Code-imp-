//basic code to print all prime upto n
#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


void printallPrime(int n){
    for(int i=2;i<=n;i++){
     
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return;
}

int main(){
    int n ;
    cin>>n;
    printallPrime(n);
}

/* EFFICIENT CODE-SIEVE OF ERATHENES ALGORITHEM
void sieve(int n)
{
	if(n <= 1)
		return;

	bool isPrime[n+1];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<" ";
	}
}
int main() {
    
    	int n = 18;

		sieve(n);
}