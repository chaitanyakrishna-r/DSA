#include <iostream>
using namespace std;

int main(){

    char ch ;
    cout<<"Enter the character : ";
    
    cin >>ch;
    int a = ch;
    cout<<a<<endl;
   
    if(97 <= a && a <= 122){
        cout<<"The Character is Lower Case"<<'\n';
    }
    else if(65 <= a && a <= 90){
        cout<<"The Character is Upper Case"<<'\n';
    }
    else if(48 <= a && a <= 57){
        cout<<"The character is numeric \n";

    }else{
        cout<<"The character is special charater"<<endl;
    }
    
    // this is give by chatgpt where by just giving 'a' to 'z' to take the number as 97 to 122
    // without using number we can directly use alphabet
//   if (ch >= 'a' && ch <= 'z') {
//   cout << ch << " is a lowercase letter." << endl;
//   } 

}