#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isPalindrome(string s){
    int start = 0;
    int end = s.size()-1;

    while(start < end){
        while(start < end && !isalnum(s[start])){
            start++;
        }
        while(start < end && !isalnum(s[end])){
            end--;
        }
        if(tolower(s[start]) != tolower(s[end])){
            cout<<"The given stirng in not palindrome"<<endl;
            return false;
        }else{
            start++;
            end--;
        }
    }
    cout<<"The Given string is palindrome"<<endl;
    return true;
}

int main(){
    string str = "ababa";
    isPalindrome(str);
    return 0;
}