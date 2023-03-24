#include<iostream>
using namespace std;
int firstindex(int arr[],int n,int x){
    if(n==0){
        return -1;
    }
   
    if(arr[0]==x){
        return 0;

    }
    int ans = firstindex(arr+1,n-1,x);
    if(ans<0) return ans;
    else{
        return ans+1;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<firstindex(arr,n,x);
    
}