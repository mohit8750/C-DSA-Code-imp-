#include<iostream>
using namespace std;
void naivePartition(int*arr,int n,int l,int h,int p){
    int temp[n];
    int index=0;
    for(int i=l;i<=h;i++){
        if(arr[i]<=arr[p]){
            temp[index]=arr[i];
            index++;
        }

    }
    for(int i=l;i<=h;i++){
        if(arr[i]>arr[p]){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i];
    }

}



//LAMUTO PARTITION 
void swap(int n,int m){
    int temp=n;
    n=m;
    m=temp;
}



int lpartition(int *arr,int n,int l,int h){
    int i=l-1;
    int p=arr[h];
    for(int j=l;j<=h-1;j++){
        if(arr[j]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[p]);
    return i+1;
}

//HOARE PARTITION
int partition(int arr[], int l, int h)
{   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}



int main(){
   
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
     int l=0,h=n-1;
    
    cout<<lpartition(arr,n,l,h);
    
   return 0;

}