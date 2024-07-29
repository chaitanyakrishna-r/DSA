#include<iostream>
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
    char ch[10];
    cout<<"Enter a sentence: ";
    cin.getline(ch,10);
    cout<<"You have entered: "<< ch <<endl;
    cout<<sizeof(ch)<<endl;
    for(int i=0; i<sizeof(ch); i++){
        cout<<ch[i]<<endl;
    }
}