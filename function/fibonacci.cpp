#include<iostream>
using namespace std;


  /*void fibonacci(int n)
{
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;                        //time complexity= o(n)
        nextterm=t1+t2;
        
    t1=t2;
    t2=nextterm;
    }
    return;

}


// RECURSSIVE FIBONACCI
int fib(int n){
    if(n==1) return 0;                                //time complexity=(1.6)^n
    if(n==2) return 1;
    return fib(n-1)+fib(n-2);
}
*/

//array fibonacci
void fib2(int n){
    int f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++){                                 //time complexity=O(n)
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=0;i<n;i++){
        cout<<f[i]<<" ";
    }
}


int main()
{
 int n;
 cin>>n;
 fib2(n);
 return 0;
}































