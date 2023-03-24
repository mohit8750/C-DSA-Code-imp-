/*An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
Sarasvati has an array of N non-negative integers. The i-th integer of the array is
Ai
. She wants to choose a contiguous arithmetic subarray from her array that has
the maximum length. Please help her to determine the length of the longest
contiguous arithmetic subarray.
Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Ai
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the length of the longest contiguous arithmetic
subarray.*/


#include <iostream>
using namespace std;

int maxFreq(int *arr, int size)
{
    int maxFreq = -1;
    bool arrayStart = true;
    int lastElement = -1;
    int freq = 0;
    for (int i = 0; i < size; i++)
    {
        if (arrayStart)
        {
            lastElement = arr[i];
            freq++;
            arrayStart = false;
        }
        else
        {
            if (arr[i] == lastElement)
            {
                freq++;
            }
            else
            {
                lastElement = arr[i];
                freq = 1;
            }
        }
        maxFreq = max(maxFreq, freq);
    }
    return maxFreq;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int z = 0;
    while (z++ < t)
    {
        int n;
        cin >> n;
        int diff[n - 1];
        int last;
        cin >> last;
        for (int i = 0; i < n - 1; i++)
        {
            int curr;
            cin >> curr;
            int differ = curr - last;
            diff[i] = differ;
            last = curr;
        }
        cout << "Case #" << z << ": " << (maxFreq(diff, n - 1) + 1) << endl;
    }

    return 0;
}