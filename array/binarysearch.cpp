#include <iostream>
using namespace std;
/*
int binarySearch(int arr[], int n, int x) //agar arr[n] dalenge to error aa raha h
{
    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            first = mid + 1;
        }
        else

        {
            last = mid - 1;
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
    int x;
    cin >> x;
    cout << binarySearch(arr, n, x) << endl;
    return 0;
}
*/

int rightbinarySearch(int *arr, int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int m = (l + h) / 2;

        if (arr[m] == x)
        {
            if (m == n - 1)
            {
                return m;
            }
            else if (arr[m + 1] == x)
            {
                l = m + 1;
            }
            else
            {
                return m;
            }
        }
        else if (arr[m] > x)
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
int leftBinarySearch(int *arr, int size, int num)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == num)
        {
            if (mid == 0)
            {
                return mid;
            }
            else if (arr[mid - 1] == num)
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else if (arr[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
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
    int x;
    cin >> x;
    cout << rightbinarySearch(arr, n, x);
    return 0;
}
