#include<iostream>
#include<string>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};

// storing count for alphapet
    for(int i=0; i<s.length(); i++){
        char ch =s[i];
        int number = 0;
        // for lowerCase
        // number = ch - 'a';
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        // for upperCase
        else{
            number = ch - 'A';
        }
        arr[number]++; 
    }

// max occurence
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
    }
    return 'a' + ans;
}


int main(){
    string s ;
    cin>>s;
    char ch = getMaxOccCharacter(s);
    cout<<ch<<endl;
    return 0;
}