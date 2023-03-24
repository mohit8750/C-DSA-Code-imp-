#include <iostream>
using namespace std;
int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
    {
        return n;
    }
    int index = pos - 1;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return n + 1;
}
int main()
{
    int n;
    cin >> n;
    int cap;
    cout << "ENTER THE CAPACITY OF ARRAY" << endl;
    cin >> cap;
    int arr[cap];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "BEFORE INSERTION" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int x;
    cout << "ENTER THE ELEMENT YOU WANT TO INSERT" << endl;
    cin >> x;
    int pos;
    cout << "ENTER THE POSITION" << endl;
    cin >> pos;

    cout << insert(arr, n, x, cap, pos);
    cout << "AFTER INSERTION" << endl;
    for (int i = 0; i < cap; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}