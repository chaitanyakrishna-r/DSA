#include<iostream>
using namespace std;
 class human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
 };

class animal{
    public:
    int height;
    int weight;
    int age;

    public :
    void bark(){
        cout<<"barking"<<endl;
    }
};
//single inheritance
class dog: public animal{
    public:
    string name;
};
//mutli-level
class germanShepherd: public dog{

};

//multiple inheritance
class
int main(){
    
    dog pug;
    pug.name = "do";
    cout<<pug.name<<endl;
    cout<<pug.height<<endl;
    return 0;
}