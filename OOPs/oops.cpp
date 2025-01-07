#include<iostream>
using namespace std;

class Students{
    private:
        string name;
        int age;

    public:
    int getAge(){
        return this-> age;
    }    
};


int main(){
    Students first;
    cout<<"hello"<<endl;
    return 0;
}