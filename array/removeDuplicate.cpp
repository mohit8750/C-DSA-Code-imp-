#include <iostream>
using namespace std;
int removeDublicate(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
    
}
int main()
{
    int n=5;
    int arr[] = {1, 1, 2, 2, 3};
    n= removeDublicate(arr, 5);
     for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
}
