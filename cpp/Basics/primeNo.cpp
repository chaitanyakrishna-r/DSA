#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    int i = 2;
    while (i < n)
    {
        if(n%i !=0){
            cout<<"its prime number for : "<<i <<endl;
            
        }else{
            cout<<"its not a prime number for : "<<i <<endl ;
        }
        i++;
    }
    
 
}