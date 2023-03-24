#include<iostream>
using namespace std;
//kth digit is set or not using left shift operator
void kisSet(int n ,int k)
{
    if(n & (1<<(k-1)) ){
        cout<<"k is  Set"<<endl;
    }
    else{
        cout<<"k is not Set"<<endl;
    }
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    kisSet(n,k);
    return 0;
}



/* USING RIGHT SHIFT OPERATOR
void isKthBitSet(int n, int k) 
{ 
	if ((n >> (k - 1)) & 1) 
		cout << "SET"; 
	else
		cout << "NOT SET"; 
} 

// Driver code 
int main() 
{ 
	int n = 5, k = 1; 
	isKthBitSet(n, k); 
	return 0; 
} 
*/