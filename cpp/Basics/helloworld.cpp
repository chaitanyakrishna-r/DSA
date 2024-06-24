#include <iostream>
using namespace std;

int main (){

    /*
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
    */
 



   //type casting
   char b = 83;
   cout << b << endl;//output will be "S"

   int ch ='b';
   cout << ch << endl; 
   //"here the output will be 98 as ascii value of b is 98 here the implict type casting as taken place"

//    explicit
    float f = 1.52;
    int fi = int(f);
    cout<< f <<endl << fi <<endl;

   float a = 2.0/5;
   cout << a <<endl;



//    opertors

    float x=3.0;
    int y=5;


    int add = x+y;
    cout <<add<< endl;

    int sub = x-y;
    cout << sub <<endl;

    int mul = x*y;
    cout << mul <<endl;

    float div = x/y;
    cout << div <<endl;// will give reminder;




 }
