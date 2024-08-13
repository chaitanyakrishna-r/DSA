#include<iostream>
using namespace std;


int main(){
    // bad practices
    // int *prt;
    // cout<<prt<<endl;
    // cout<<*prt<<endl;
   

    // int i = 8;
    // int *p = 0; //null pointer
    // p = &i;
    // cout<<*p<<endl;
    // cout<<p<<endl;


    /*int num=7;
    int *p1 = &num;
    cout<<num<<endl;
    cout<<*p1<<endl;
    *p1 = *p1+1;
    cout<<*p1<<"after"<<endl;
    cout<<p1<<endl;
    p1= p1+1;
    cout<<p1<<"after"<<endl;*/

    // int num = 4;
    // int *p1 = &num;
    // // copying of pointers
    // int *p2 = p1;

    // cout<<p2<<" and "<<p1<<endl;
    // cout<<"p1 lo value "<<++(*p1)<<" p2 lo value "<<++(*p2)<<endl;
    // cout<<num<<endl;

    // improtant pointer arthamatic
    int i = 9; 
    int *p = &i;

    cout<<(*p)++<<endl;
    cout<<p<<endl;

    cout<<"before "<<p<<endl;
    p = p+1;
    cout<<"after "<<p<<endl;

    double d =2.399;
    double *pd = &d;
    cout<<*pd<<endl;
    cout<<"before "<<pd<<endl;
    pd= pd+2;
    cout<<"after "<<pd<<endl;

    int *ptr =0;
    int a = 10;
    *ptr = a;
    cout<<*ptr;

    return 0;
}