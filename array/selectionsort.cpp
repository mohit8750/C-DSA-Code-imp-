#include <iostream>
using namespace std;

void selectionsort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void selectionsort2(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int max_idx = i;
        for (int j = i-1; j >=0; j--)
        {
            if (arr[j] > arr[max_idx])
            {
                max_idx = j;
            }
        }
            int temp=arr[i];
            arr[i]=arr[max_idx];
            arr[max_idx]=temp;
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
    selectionsort2(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
