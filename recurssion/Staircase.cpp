#include <iostream>
using namespace std;
/*int staircase(int n){
    if(n==1||n==0) return 1;
    if(n==2) return 2;
    
     if(n>=3){
         return staircase(n-1)+staircase(n-2)+staircase(n-3);
     }

}
int main(){
    int n;
    cin>>n;
    cout<<staircase(n);
    return 0;
    
}
*/

int staircase(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 4;

    return staircase(n - 1) + staircase(n - 2) + staircase(n - 3);
}
int main()
{
    int n;
    cin >> n;
    cout << staircase(n);
    return 0;
}