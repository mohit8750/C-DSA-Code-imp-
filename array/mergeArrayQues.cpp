/*Here we take a single array with three points namely, the lower, the middle and the highest point. The elements from the lower to the middle are sorted and the elements from the (middle+1) to the higher are sorted. The task is to merge these two sorted parts into one.*/
#include<iostream>
using namespace std;


void mergeSort(int arr[], int n)
{
    int l = 0;
    int h = n - 1;
    int mid = (l - h) / 2;
    int first[l - mid + 1];
    int last[h - mid];
    for (int i = 0; i < l - mid + 1; i++)
    {
        first[i] = arr[i + l];
    }
    for (int j = 0; j < h - mid; j++)
    {
        last[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = l;
    while (i < (l - mid + 1) && j < (h - mid))
    {

        if (first[i] <= last[j])
            arr[k++] = last[i++];
        else
            arr[k++] = first[j++];
    }
    while (i < (l - mid + 1))
        arr[k++] = first[i++];
    while (j < (h - mid))
        arr[k++] = last[j++];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort;
    return 0;
}
