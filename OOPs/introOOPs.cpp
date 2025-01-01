#include<iostream>
using namespace std;

 class Hero{

    //properties

    //private can be accessed only inside class
    private:
    int strength;
  
    //public can be accessed any where
    public:
    int health;
    char level;
//create static member variable or data members
    static int timeToComplete;

    //static funtion
    //onlu access static member
    static int random(){
        return timeToComplete;
    }
    
    // creating parameterised constructor - custom
     Hero(int health){
        cout<<"value of this"<< this <<endl;
        this->health = health;
    }
    // creating constructor - simple constructor
     Hero(){
        cout<<"calling constructor"<<endl;
    }
    
    //copy constructor
    Hero(Hero& temp){
        this->strength = temp.strength;
    }


    void print(){
        cout<<"strength: "<<strength<<endl;
    }

    int getStrenght(){
        return strength;
    }

    void setStrenght(int srgth){
        // also we can give some condition for example if passkey is present and correct they only we can access
        strength = srgth;
    }

    //destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

int Hero:: timeToComplete = 80;
int main(){


cout<<Hero::timeToComplete<<endl;
cout<<Hero::random()<<endl;


//static
    // Hero a;


 //Dynamic
    // Hero *b = new Hero();
    // delete b;

    // //static allocation
    // //object creation
    // //instance of class is object
    // Hero pawan;


    // // cout<<"strenght before : "<<pawan.getStrenght()<<endl;
    // // pawan.setStrenght(70);
    // // cout<<"strenght AFTER : "<<pawan.getStrenght()<<endl;
    // // cout<<"health of : "<<pawan.health<<endl;
    // // cout<<"Level of : "<<pawan.level<<endl;

    // //dynamic allocation
    // Hero *krishna = new Hero;
    // cout<<"level of "<<(*krishna).level<<endl;
    // cout<<"strength before:  "<<(*krishna).getStrenght()<<endl;
    // (*krishna).setStrenght(100);
    // cout<<"strength after: "<<(*krishna).getStrenght()<<endl;

    // statically creating object
    // Hero ram(15);
    // cout<<"address of h"<< &ram <<endl;

    //dynamically
    // Hero *h = new Hero(5);
    // cout<<"health"<<h->health<<endl;
    // cout<<"health"<<ram.health<<endl;

    // Hero ram(5);
    // ram.setStrenght(69);

    // //copy constructor
    // Hero krishna(ram);
    // cout<<"krishna's strenght is : "<<krishna.getStrenght()<<endl;

    

    return 0;
}