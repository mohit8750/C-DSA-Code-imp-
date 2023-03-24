int main() {
	int t;
	cin>>t;
	int a1,a2,b1,b2,c1,c2;
	for(int i=0;i<t;i++){
	    cin>>a1>>a2>>b1>>b2>>c1>>c1;
	    int A=a1+a2;
	    int B=b1+b2;
	    int C=c1+c2;
	    if(A>=B && A>=C){
            cout<<A<<endl;
        }
        else if(B>=A && B>=C){
            cout<<B<<endl;
        }
        else{
            cout<<C<<endl;
        }
	
	}
	
}
