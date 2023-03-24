#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx&&arr[i]>arr[i+1]){
            ans++;
            mx=max(mx,arr[i]);
           
            
        }
       
    }
     cout<<"the number of record breaking day is"<<" "<<ans;
    return 0;
}