#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int first=0;
    int last=n-1;
    if(first<last){
        int temp=arr[first];
        arr[first]=arr[last];
        arr[last]=temp;
        first++;
        last--;
    }
   
}
int main() {
	
      int arr[] = {10, 5, 7, 30}, n = 4;

      cout<<"Before Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       reverse(arr, n);

       cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}