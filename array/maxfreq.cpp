#include <iostream>
using namespace std;
mostcontiguousElement(int arr[],int n)
{
    int lastdigit = -1;
    int freq = 0;
    int maxfreq = -1;
    int maxElement = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==lastdigit)
        {
            freq++;
        }
        else
        {
            lastdigit = arr[i];
             freq = 1;
        }
        if (freq > maxfreq)
        {
            maxfreq = freq;
            maxElement = arr[i];
        }
    }
    return maxfreq;
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
    cout << mostcontiguousElement(arr,n) << endl;
}