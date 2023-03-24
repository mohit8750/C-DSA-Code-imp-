#include<iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int ans=1;
    for(int i=0;i<n;i++){
        ans=ans*x;
    }
    cout<<ans;
    return 0;
}
/* EFFICIENT CODE
 int power(int x, int n)
{
	if(n == 0)
		return 1;

	int temp = power(x, n/2);

	temp = temp * temp;

	if(n % 2 == 0)
		return temp;
	else
		return temp * x; 
}
int main() {
    
    int x = 3, n = 5;

	cout<<power(x, n);
}