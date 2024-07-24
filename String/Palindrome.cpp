#include<iostream>
#include<algorithm>
using namespace std;

int getLen(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    cout<<"The size of the char array is : "<<count<<endl;
    return count;
}

bool isAlphaNum(char ch){
    return ch >='A' && ch <= 'Z' ||
           ch >= '0' && ch <= '9' ||
           ch >= 'a' && ch <= 'z';
}

char toLowerCase(char ch){
    if(ch >='a' && ch<='z'){
        return ch;
    }else{
        char temp = ch -'A' + 'a';
        return temp ;
    }
}

bool isPalindrome(char ch[],int n){
    int s = 0; 
    int e = n-1; 
        while(s < e){
            while ( s<e && !isAlphaNum(ch[s]))
            {
                s++;
            }
            while ( s<e && !isAlphaNum(ch[e]))
            {
                e--;
            }
            
            if(toLowerCase(ch[s++]) != toLowerCase(ch[e--])){
                cout<<"The char array is not palindrome"<<endl;
                return false;
            }
            
        }
    
    cout<<"The char array is palindrome"<<endl;
    return true;
}


int main(){
    char ch[20];
    cout<<"Enter the string"<<endl;
    cin>>ch;
    int n = getLen(ch);
    cout<<ch<<endl;
    isPalindrome(ch,n);
    return 0;
}