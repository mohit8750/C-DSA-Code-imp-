#include <iostream>
using namespace std;
int binarysearch(int *arr, int n, int k)
{
    int l = 0;
    int h = n - 1;

    while (l <= h)
    {
        int m = (l + h) / 2;
        if (arr[m] == k)
            return m;
        else if (arr[m] > arr[k])
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
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
    int k;
    cin >> k;
    cout << binarysearch(arr, n, k);
    return 0;
}