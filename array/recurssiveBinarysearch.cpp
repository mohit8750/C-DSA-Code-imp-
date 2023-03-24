#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int first, int last,int x)
{
   
    int mid = (first + last) / 2;
    if (first > last)  return -1;
    
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)

            return binarySearch(arr, n, first, mid - 1,x);

        if (arr[mid] < x)

            return binarySearch(arr, n, mid + 1, last,x);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"ENTER THE ELEMENT YOU WANT TO FIND"<<endl;
    cin>>x;
    int first=0;
    int last= n-1;
    cout<<binarySearch(arr,n,first,last,x);
    return 0;
}