#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int num = 1;
    

    switch (num)
    {

    case 1 :
        if(number >= 100){
            int numOfHun = number/100; 
            cout<<"The number of hunder's are : "<<numOfHun<<endl;
            number =number % 100;
    }
       
    case 2 :    
        if(number >= 50){
            int numOfFif = number/50;
            cout<<"The number of fifite's are : "<<numOfFif<<endl;
            number =number%50;
    }
        
    case 3 :    
        if(number >= 20){
            int numOfTwe  = number/20;
            cout<<"The number of twenty's are : "<<numOfTwe<<endl;
            number =number%20;
    }
     case 4:
            if (number >= 10) {
                int numOfTen = number / 10;
                cout << "The number of ten's are: " << numOfTen << endl;
                number = number % 10;
            }
         break;   

    default:
        cout << "Invalid number entered." << endl;
    }

    return 0;

}
    
