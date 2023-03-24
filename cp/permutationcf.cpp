#include <iostream>
using namespace std;
int permutation(int *arr,int n)
{
    bool sorted = true;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
        }
    }
    if (sorted == true)
        return 0;
    else if (arr[0] == 1 || arr[n - 1] == n)
        return 1;
    else if (arr[0] == n && arr[n - 1] == 1)
        return 3;
    else
        return 2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<permutation(arr,n)<<"\n";
    }
    return 0;
}