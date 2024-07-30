#include<iostream>
// #include<string>
using namespace std;

// void replaceSpaces(string& str){
//     string temp;
//     for(int i=0; i<str.length();i++){
//         if(str[i] ==' '){
//            temp += "@40";
//         }else{
//             temp.push_back(str[i]);
//         }
//     }
//     cout<<temp<<endl;
//     str = temp;
// }

void replaceSpaces(string& str){
    int spaceCount = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            spaceCount++;
        }
    }
    int originalLen = str.length();

    int newlen = originalLen + spaceCount*2;
    str.resize(newlen);

    int originalIndex = originalLen - 1;
    int newIndex = newlen - 1;
    while (originalIndex >=0 ){
        if(str[originalIndex] == ' '){
            str[newIndex] = '0';
            str[newIndex-1] = '4';
            str[newIndex-2] = '@';
            newIndex -= 3;
        }else{
            str[newIndex] = str[originalIndex];
            newIndex--;
        }
        originalIndex--;
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