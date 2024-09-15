#include<iostream>
using namespace std;


int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int sum=(number*number + number)/2;
    for(int i=1; i<=number; i++){
        sum= sum + i;
    }
    cout<<sum<<endl;
    
}
