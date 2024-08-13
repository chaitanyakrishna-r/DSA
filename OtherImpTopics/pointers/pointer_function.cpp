#include<iostream>
using namespace std;


void printPointer(int *p){
    cout<< *p <<endl;
    cout<< p <<endl;
}
void updateP(int *p){
    
    cout<<p<<endl;
    *p= *p+1;
}

int main(){
    int value = 6;
    int *p = &value;
    // printPointer(p);
    cout<<p<<endl;
    cout<<*p<<endl;
    updateP(p);
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}