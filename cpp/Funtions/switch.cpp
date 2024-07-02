#include<iostream>
using namespace std;

int main(){

    int a;
    int b; 
    int num;
    cout<<endl<<"Enter the numbes"<<endl;
    cin>>a;
    cin>>b;

    char choice;
    cout<<"Enter the operation: ";
    cin>>choice;

    switch(choice){
        case '+':
            num = a+b;
            break;

        case '-':
            num = a-b;
            break;
            
        case '*':
            num = a*b;
            break;

        case '/':
            num = a/b;
            break;

        default:
            cout<<"Enter the correct operator"<<endl;   
            break; 
    }
    cout<<num<<endl;
    return 0;
}