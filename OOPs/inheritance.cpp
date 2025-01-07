#include<iostream>
using namespace std;


//parent class
class  Human{

    public:
        int  weight;
        int   age;
    
    public:
    int getAge(){
        return this-> age;
    }
    void setWeight(int w){
        this->weight = w;
    }

};
// child class
class Male: public Human{
    public:
        string color;

    public:
    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }    
};

int main(){
    
    Male object1;
    

    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;

    object1.sleep();
    object1.setWeight(79);
    cout<<"after updating age is: "<<object1.weight<<endl;
    return 0;
}