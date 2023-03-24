#include<iostream>
using namespace std;
//TO PRINT N TO 1

void fun(int n){
   if(n==0){
       return;
   }
        cout<<n<<" ";
        fun(n-1);
    
}
//TO PRINT 1 TO N   (took more time and space )                              
void fun2(int n ){
    if(n==0){
        return ;
    }
    fun2(n-1);
    cout<<n<<" ";
}
//TO PRINT 1 TO N (tail recursive) took less space
//Initially pass k as 1
void fun3(int n,int k){
if(n==0){
    return;
}
  cout<<k<<" ";
  fun3( n-1,k+1);
}

int main(){
    int n;
    cin>>n;
    fun2(n);
    return 0;
}