#include <iostream>
using namespace std;
int main()
{
    int sidea, sideb, sidec;
    cout << "ENTER THE THREE SIDES OF TRIANGLE"<<endl;
    cin >> sidea >> sideb >> sidec;
    if (sidea == sideb && sideb==sidec)
    {
        cout << "THIS IS AN EQUILATERAL TRIANGLE";
    }
    else if (sidea == sideb || sideb == sidec || sidec == sidea)
    {
        cout << "THIS IS AN ISOSCALANE TRIANGLE";
    }
    else
    {
        cout << "THIS IS AN SCALENE TRIANGLE";
    }
    return 0;
}
