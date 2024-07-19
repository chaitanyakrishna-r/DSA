#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(3);
    
    d.erase(d.begin(),d.begin()+1);
    for(int i=0; i<d.size(); i++){
        cout<<d[i];
    }
    
    
    return 0;
}