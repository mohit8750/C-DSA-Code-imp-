#include <bits/stdc++.h> 
using namespace std;
unsigned int countsetbits(unsigned int n){
     unsigned int count=0;
    while(n>0){
       
        if(n%2 != 0){
            count++;
            n=n/2;
        }
    }
    return count;
   
}
  
  int countsetbits2(int n){
     int count=0;
    while(n>0){
       
        if(n & 1==1){
            count++;
            n<<1;
        }
    }
    return count;
}



int main()
{
    int n;
    cin>>n;
   cout<< countsetbits(n);
    return 0;
}
/* MORE EFFICIENT SOLUTION    Brian and Kerningham Algorithm
unsigned int countSetBits(int n) 
{ 
       unsigned int count = 0; 
       while (n) { 
          n &= (n - 1); 
          count++; 
       } 
      return count; 
} 
