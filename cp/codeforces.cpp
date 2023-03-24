#include <iostream>
using namespace std;
int gcd(int a,int b){
    int check=min(a,b);
    if(check==0) return max(a,b);
    while(check>0){
        if(a%check==0 && b%check==0){
        break;
        }
        check--;                                   //time complexity=min(a,b)
         
    }
    return check;
  
}
int potion(int k)
{
   return 100/gcd(k,100);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << potion(k)<<"\n";
    }
    return 0;
}