#include <iostream>
using namespace std;
/*double pow(int n,int m){
    if(m==0) return 1;
    return n*pow(n,m-1);
}

double geosum(int k){
    if(k==0) return 1;
    
return (1/ pow(2,k))+geosum(k-1);

}
int main(){
    int k;
    cin>>k;
    cout<<geosum(k);
}
*/
double geosum(int k, double term)
{
    if (k == 0)
    {
        return term;
    }
    return term + geosum(k - 1, term / 2);
}
int main()
{
    int k;
    cin >> k;
    cout << geosum(k,1);
}
