#include<iostream>
using namespace std;


int main(){
    int num =5;
    // address operator -> &num
    cout<<"The address of num is "<<&num <<endl;

    int *prt = &num;
    // *prt is derefernces opertors;
    cout<<*prt<<endl;
    cout<<prt<<endl;
    cout<<sizeof(*prt)<<endl;
    double d = 4.55456;
    double *p2 = &d;
    cout<<"double"<<endl;
    cout<<*p2<<endl;
    cout<<p2<<endl;
    cout<<sizeof(*p2)<<endl;

    cout<<"bool"<<endl;
    bool b=0;
    bool *pb = &b;
    cout<<b<<endl;
    cout<<pb<<endl;
    cout<<*pb<<endl;
    cout<<sizeof(b)<<" and "<<sizeof(pb)<<endl;
    return 0;
}