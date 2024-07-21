#include<iostream>
#include<set>

using namespace std;


int main(){
    set<int> s;

    s.insert(2);    
    s.insert(1);    
    s.insert(0);    
    s.insert(2);    
    s.insert(4);    
    s.insert(5);    
    s.insert(5);    
    s.insert(6);   

    s.erase(s.begin()); 
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl<<s.count(4)<<endl;
    set<int> :: iterator itr = s.find(2);
   for(auto it = itr;it!=s.end();it++){
        cout<<*it<<" ";
   }
    return 0;
}