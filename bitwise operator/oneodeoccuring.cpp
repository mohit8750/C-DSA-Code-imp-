
#include <iostream>
using namespace std;
int oneodd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])

                count++;
        }
        if (count % 2 != 0)
            return arr[i];
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
    cout << oneodd(arr, n);
}
/*
#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count % 2 != 0)
            return arr[i];
    }
}

int main()
{

    int arr[] = {2, 2, 3, 4, 4}, n = 5;

    cout << findOdd(arr, n);
}
*/

//EFFICIENT CODE
int findOdd(int arr[], int n)
{
    int res = 0;
    
    for(int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    
    return res;
}
    