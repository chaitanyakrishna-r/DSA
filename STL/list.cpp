#include<iostream>
#include<list>
using namespace std;


int main(){

    list<int> l;

    l.push_back(2);
    l.push_front(5);
    for(int i:l){
        cout<<i<<" ";
    }
    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }
    
}