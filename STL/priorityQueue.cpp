#include<iostream>
#include<queue>
using namespace std;


int main(){

    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int> ,greater<int> > mini;

    maxi.push(2); 
    maxi.push(10); 
    maxi.push(0); 
    maxi.push(8); 
    maxi.push(1); 


    mini.push(2); 
    mini.push(10); 
    mini.push(0); 
    mini.push(8); 
    mini.push(1); 
    // cout<<maxi.size();ṇ
    int n= mini.size();

    for(int i=0 ;i<n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    return 0;
}