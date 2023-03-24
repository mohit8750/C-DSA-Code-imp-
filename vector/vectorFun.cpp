#include <iostream>
#include<vector> 
using namespace std;
//v.pop_back(),v.front(),v.back()
int main()
{
    vector<int> v{10, 20, 30, 40};
   
    v.pop_back();
    for (int i = 0; i = v.size(); i++)      //ye infinite time kyu run kr raha h
    {
        cout<< v[i] << " ";
    }
    cout<<v.front()<<" ";
    cout<<v.back()<<" ";
    return 0;
}

int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    v.pop_back();
    
    for(int x :  v){
        cout << x << " ";
    }
  
    cout << v.front() << " ";
    cout << v.back() << " ";
    
    return 0; 
}


//insert
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    auto it = v.insert(v.begin(), 100);
    v.insert(v.begin() + 2, 200);
    v.insert(v.begin(), 2, 300);
    
    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin() + 2);
    for(int x :  v){
        cout << x << " ";
    }cout << endl;
  
    for(int x :  v2){
        cout << x << " ";
    }
    
    return 0; 
}
//ERASE
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    v.erase(v.begin());
  
    for(int x :  v){
        cout << x << " ";
    }cout << endl;
  
    v.erase(v.begin(), v.end() - 1);  
    
    for(int x :  v){
        cout << x << " ";
    }
    
    return 0; 
}
//CLEAR,EMPTY
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    v.clear();
    
    cout << v.size() << " ";
  
    if(v.empty() == true)
        cout << "Empty";
    else
        cout << "Not Empty";
    
    return 0; 
}
//RESIZE
int main() 
{ 
    vector<int> v{10, 5, 20, 15} ; 
    
    v.resize(3);
    for(int x: v){
        cout << x << " ";
    }cout << endl;
  
    v.resize(5);  
    for(int x: v){
        cout << x << " ";
    }cout << endl;
    
    v.resize(8, 100);  
    for(int x: v){
        cout << x << " ";
    }
    return 0; 
}