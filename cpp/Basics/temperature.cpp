#include <iostream>
using namespace std;

int main(){
    char temp;
    cout<<"Entre the tempertaure :"<<endl;

    cin>> temp;
    float fah,cel,kel;
    // Fahrenheit to celsius
    if(temp == 'f'){
        cout<<"Entre the temperature in Fahrenheit "<<endl;
        cin>>fah;
        cel = (fah-32)*5.0/9.0;
        kel = ((fah-32)*5.0/9.0)+273.15;
        cout<<"The tempertaure to fah to cel is :"<<cel<<endl;
        cout<<"The tempertaure to fah to kel is :"<<kel<<endl;
    }
    else if(temp == 'c'){
        cout<<"Entre the temperature in Celisus"<<endl;
        cin>>cel;
        fah = (9.0/5.0)*cel+32;
        kel = cel+273.15;
        
        cout<<"The tempertaure to cel to fah is :"<<fah<<endl;
        cout<<"The tempertaure to cel to kel is :"<<kel<<endl;
    }
    else if(temp == 'k'){
        cout<<"Entre the temperature in kelvin"<<endl;
        cin>>kel;
        fah = (9.0/5.0)*(kel-273.15)+32;
        cel = kel-273.15;
        
        cout<<"The tempertaure to cel to fah is :"<<fah<<endl;
        cout<<"The tempertaure to cel to kel is :"<<cel<<endl;
    }
    else{
        cout<<"Enter the correct temperature";
    }
}