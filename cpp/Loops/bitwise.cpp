#include <iostream>
using namespace std;


int main(){

    int a=4;
    int b=6;

    cout<<"a&b is: "<<(a&b)<<endl;
    cout<<"a|b is: "<<(a|b)<<endl;
    cout<<"a is: "<<(~a)<<endl;
    cout<<"b is: "<<(~b)<<endl;
    cout<<"a^b is: "<<(a^b)<<endl;


    cout<<(17>>1) <<endl;
    cout<<(17>>2) <<endl;
    cout<<(19<<1) <<endl;
    cout<<(21<<2) <<endl;

    int i=22;

    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    cout<<(i+=2)<<endl;
    cout<<(i-=2)<<endl;
  int x,y=1;
     x=10;
     if(++x){
        cout<<y;
     }else{
        cout<<++y;
     }
}