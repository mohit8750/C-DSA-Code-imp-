#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE NUMBER YOU WANT TO FIND THE SUM" << endl;
    cin >> n;
    int sum = 0, counter = 1;
    while (counter <= n)
    {
        sum += counter;
        counter++;
    }
    cout << sum;
    return 0;
}

