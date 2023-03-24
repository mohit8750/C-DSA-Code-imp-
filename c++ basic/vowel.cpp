#include <iostream>
using namespace std;
int main()
{
    char x;
    
    cout << "ENTER AN ALPHABET"<<endl;
    cin >> x;
    int isLowercaseVowel, isUppercaseVowel;
    
    isLowercaseVowel = (x == 'a' || x == 'e'|| x == 'i' || x =='o' || x == 'u');
    isUppercaseVowel = (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
    {
        cout << x << " "<<" is vowel";
    }
    else
    {
        cout << x<< " "<<"is consonent";
    }
    return 0;
}