#include<iostream>
using namespace std;
int main()
{
int n=10;
int *nptr=&n;
*nptr=20;
cout<<n;
}