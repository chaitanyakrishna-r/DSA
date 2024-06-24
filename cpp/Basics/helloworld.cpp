#include <iostream>
using namespace std;

int main (){

    cout<<"hello world"<<endl;
    
    int a = 123;
    int sizea = sizeof(a);
    cout << a << endl;
    cout <<"size of int is :"<< sizea <<endl;

    char b = 'c';
    int sizeb = sizeof(b);
    cout << b <<endl;
    cout << "size of char is :"<< sizeb <<endl;

    bool c = false;
    int sizec = sizeof(c);
    cout << c << endl;
    cout <<"size of bool is :" << sizec << endl;
 
    float f =1.3;
    int sizef = sizeof(f);
    cout << f <<endl;
    cout <<"size of float is :"<< sizef <<endl;

    double d =1.335;
    int sized = sizeof(d);
    cout<< d <<endl;
    cout<< "size of double is:" <<sized <<endl;
 }
