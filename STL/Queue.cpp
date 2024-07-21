#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<string> q;
    q.push("chaitanya");
    q.push("krishna");
    q.push("hello");
    cout<<q.front();
    cout<< q.size();
    return 0;
}  