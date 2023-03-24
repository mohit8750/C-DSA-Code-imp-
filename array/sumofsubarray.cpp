#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



  
    for(int i=0;i<n;i++){ 
        int curr=0;
        for(int j=i;j<n;j++){
           
            curr+=arr[j];
            cout<<curr<<" ";
        }
    }
    return 0;
}

/*
// using recursion.
int findSum(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
*/
 