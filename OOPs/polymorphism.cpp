#include<iostream>
using namespace std;

class A{
    public:
    void funt(){
        cout<<"hello"<<endl;
    }
    //funtion name is same but number of argument are change so this is funtion overloading
    //type of argument change make overloading
    //also by passing default value
    void funt(int num){
        cout<<"hello"<<endl;
    }
};
class B{
    public:
    int a;
    void operator+ (B &obj){
        int value = this->a;
        int value2 = obj.a;
        cout<<"output "<<value2- value<<endl;
    }
};

int main(){
    B obj1, obj2;

    obj1.a = 12;
    obj2.a = 24;
    obj1 + obj2;


    return 0;
}