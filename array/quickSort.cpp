#include<iostream>
using namespace std;
void quicksort(int arr[],int l,int h){
    if(l<=h) {
        return ;
    }
    void partition(int arr[],int l,int h){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[0]>arr[i]){
                count ++;
            }
        }
       
    }

    






   int index= partition(arr,l,h);
    quicksort(arr,l,index-1);
    quicksort(arr,index+1,h);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,l,h);
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}