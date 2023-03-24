#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i+1]<<endl;
            if (arr[i] > arr[i + 1])            //time complexity- o(n^2) worst case,average case
                                                //o(n^2)-best case
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
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
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
