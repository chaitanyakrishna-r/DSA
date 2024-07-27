#include<iostream>
#include<string>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
        return ch;
    }else{
        char temp = ch - 'A'+'a';
        return temp;
    }
    return ch;
}
bool alnum( char ch){
    if((ch >= 'A' && ch <='Z') || 
    (ch >= 'a' && ch <='z') || 
    (ch >= '0' && ch <='9')){
        return true;
    }
    return false;
}

bool isPalindrome(string s){
    int start = 0;
    int e = s.length() - 1;
    cout<<s<<endl;
    while (start < e )
    {
       while(start < e && !alnum(s[start])){
             start++ ;
       }
       while(start < e && !alnum(s[e])){
             e-- ;
       }
        if(toLowerCase(s[start]) != toLowerCase(s[e])){
            cout<<"The given string is not palindrome"<<endl;
            return false;
        }
        else{
            start++; 
            e--;
        }
    }
    cout<<"The given string is palindrome"<<endl;
    return true;
}

bool checkValidPalidrome(string s){
    string temp ="";
    for(int i=0; i<s.length(); i++){
        if(alnum(s[i])){
            temp.push_back(toLowerCase(s[i]));
        }
    }
    cout<<temp<<endl;
    int start =0;
    int end = temp.length()-1;

    while (start < end)
    {
        if(temp[start] != temp[end]){
            cout<<"The given string is not palindrome";
            return false;
        }
         cout<<"The given string is palindrome";
        return true;
    }
    
}
int main(){
    string str = "A man, a plan, a canal: Panama";
    // isPalindrome(str);
    checkValidPalidrome(str);
    return 0;
}