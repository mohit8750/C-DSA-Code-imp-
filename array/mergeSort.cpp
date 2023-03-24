#include <iostream>
using namespace std;
void merge(int *arr, int l, int m, int h)
{

    int n1 = m - l + 1;
    int n2 = h - m;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + l];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[m + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);


    }

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l=0,r=n-1;
    
    mergeSort(arr,l,r);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}