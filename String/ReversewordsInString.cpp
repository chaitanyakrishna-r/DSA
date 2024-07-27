#include<iostream>
using namespace std;
// reverse the array
void ReverseChar(char ch[], int start, int end){
    while(start < end){
        swap(ch[start++],ch[end--]);
    }
}

// reverse words
void reverseWords(char ch[],int n){

    int s = 0;
    ReverseChar(ch,s,n-1);
    cout<<ch<<endl;
    
    for(int i=0; i<=n; i++){
            if(ch[i] == ' '){
                ReverseChar(ch,s,i-1);
                s = i+1;
            }
    }
    ReverseChar(ch,s,n-1);
}

int main(){
    char ch [] ="my name is chaitanya";
    int n =sizeof(ch)-1;

    reverseWords(ch,n);
    cout<<ch<<endl;
    return 0;
}