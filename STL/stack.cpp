#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<string> s;

    s.push("chaitanya");
    s.push("krishna");
    s.push("BE");

    cout<<"last element  "<<s.top()<<endl;
    s.pop();
   
    cout<<"last element  "<<s.top();
    cout<<endl<<s.size()<<endl;
    cout<<s.empty();
    return 0;
}