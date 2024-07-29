#include<iostream>
// #include<string>
using namespace std;

void replaceSpaces(string& str){
    for(int i=0; i<str.length();i++){
        if(str[i] ==' '){
           str[i]= '$0';
        }
    }
}


int main(){
    string str;
    cout<<"Enter the line ; "<<endl;
    getline(cin,str);
    cout<<str<<endl;
    replaceSpaces(str);
    cout<<str<<endl;
    return 0;
}