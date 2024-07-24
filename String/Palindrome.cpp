#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(char ch[],int n){
    int s = 0; 
    int e = n-1; 
    while(s < e){
        if(ch[s++] != ch[e--]){
        cout<<"The char array is not palindrome"<<endl;
        return false;
        }
        
    }
    cout<<"The char array is palindrome"<<endl;
    return true;
}


int main(){
    char ch[6]={'a','b','c','b','a'};
    cout<<ch<<endl;
    isPalindrome(ch,5);
    return 0;
}