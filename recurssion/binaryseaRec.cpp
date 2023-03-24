#include <iostream>
using namespace std;
int binaryRec(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            binaryRec(arr, l, mid - 1, x);
        }
        return binaryRec(arr, mid + 1, r, x);
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
    int x;
    cin >> x;

    cout << binaryRec(arr, 0, n - 1, x);
}