#include<iostream>
using namespace std;
/*
int lastindex(int arr[],int size,int x){
    if(size==0) return -1;
    if(arr[size]==x){
        return size;
    }
    int ans=return lastindex(arr+size-1,size-1,x);
    if(ans<0) return ans;
    else return ans+1;
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i;i<size;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<lastindex(arr,size,x);
}
*/
int lastindex(int arr[],int n,int x){
    if(n==0) {
        return -1;
    }
    int ans=lastindex(arr+1,n-1,x);
    return ans+1;
    if(arr[0]==x) {
        return 0;
    }
    else{
        return -1;
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
    cout<<lastindex(arr,n,x);
}