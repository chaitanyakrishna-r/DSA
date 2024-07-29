#include<iostream>
#include<cstring>
using namespace std;


int main(){
// for single word

    // string s;
    // cout<<"Enter the sentence "<<endl;
    // cin>>s;
    // cout<<"you entered "<<s<<endl;
    // return 0;

// for multiple words
    // string s;
    // cout<<"Enter the sentence "<<endl;
    // getline(cin, s);
    // cout<<"you have entered ; " <<s<<endl;

// for multiple sentences
    // string str;
    // cout<<"Enter multiple sentence "<<endl;
    // while(true){
    //     getline(cin,str);
    //     if(str == "exit")break;
    // }
    // cout<<"you entered: "<< str <<endl;

// for char array
    // char ch[10];
    // cout<<"Enter a sentence: ";
    // cin.getline(ch,10);
    // cout<<"You have entered: "<< ch <<endl;
    // cout<<sizeof(ch)<<endl;
    // for(int i=0; i<sizeof(ch); i++){
    //     cout<<ch[i]<<endl;
    // }

    // delimiter
    // string str;
    // char delimiter =':';
    // cout<<"Enter the line";
    // getline(cin, str, delimiter);
    // cout<<"you Entered ; "<<str<<endl;

// in built fuction for char

    // length
    // char str[100]="hello world";
    // int len = strlen(str);
    // cout<<"length of  arry is "<<len<<endl;
    // cout<<str<<endl;
    
    // comparing

    char str1[] ="hello wosrld";
    char str2[] ="hello world";
    int compare = strcmp(str1,str2);
    cout<<compare;
}