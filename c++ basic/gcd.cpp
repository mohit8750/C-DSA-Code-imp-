#include<iostream>
using namespace std;
int gcd(int a,int b){
    int check=min(a,b);
    while(check>0){
        if(a%check==0 && b%check==0){
        break;
        }
        check--;                                   //time complexity=min(a,b)
         
    }
    return check;
  
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}

/* efficient code  EUCLIDEAN ALGORITHEM CODE
int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a; 
	}

	return a;
}

int main() {
    
    	int a = 12, b = 15;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}

MORE EFFICIENT ALGORITHEM
int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int main() {
    
    	int a = 12, b = 15;
    	
    	cout<<gcd(a, b);
    	
    	return 0;
}