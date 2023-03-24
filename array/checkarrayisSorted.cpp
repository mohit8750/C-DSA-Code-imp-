#include<iostream>
using namespace std;
bool sortedornot(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sortedornot(arr,n)==true) {
         cout<<"ARRAY IS SORTED"<<endl;
         }

    else{
        cout<<"ARRAY IS NOT SORTED"<<endl;
    }
    return 0;
}