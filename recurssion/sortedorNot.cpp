//PROGRAM TO CHECK GIVEN  ARRAY IS SORTED OR NOT.

#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1) return true;

    if(arr[0]<arr[1]&& sorted(arr+1,n-1))
    {
        return true;
    }
    return false;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted){
        cout<<"IT IS SORTED";
    }
    else{
        cout<<"IT IS NOT SORTED";
    }
    return 0;
}