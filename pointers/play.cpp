#include<iostream>
using namespace std;


int main(){
    // bad practices
    int *prt;
    cout<<prt<<endl;
    cout<<*prt<<endl;
   

    // int i = 8;
    // int *p = 0; //null pointer
    // p = &i;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    int num=7;
    int *p1 = &num;
    cout<<num<<endl;
    cout<<*p1<<endl;
    *p1 = *p1+1;
    cout<<*p1<<"after"<<endl;
    cout<<p1<<endl;
    p1= p1+2;
    cout<<p1<<"after"<<endl;

    return 0;
}