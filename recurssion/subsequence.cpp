#include<iostream>
using namespace std;
int subseq(string s,string output[]){
    if(s.length()==0){
        output[0]="";
        return 1;
    }
    int smalloutputsize= subseq(s.substr(1),output);
    for(int i=0;i<smalloutputsize;i++){
        output[i+smalloutputsize]=s[0]+output[i];
    }
    return 2*smalloutputsize;
}
int main(){
    string s;
    cin>>s;
    string output[100];
    int count =subseq(s,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
}