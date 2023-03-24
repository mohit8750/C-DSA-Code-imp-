//PROGRAM TO FING SUM OF DIGITS OF A NUMBER.
#include<iostream>
using namespace std;
int sumdigit(int n){
    
    if(n<10) return n;                        
    return n%10+sumdigit(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<sumdigit(n);
    return 0;
}