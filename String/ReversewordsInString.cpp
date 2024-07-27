#include<iostream>
using namespace std;
void ReverseChar(char ch[], int start, int end){
    while(start < end){
        swap(ch[start++],ch[end--]);
    }
}
void reverseWords(char ch[],int n){
    int s = 0;
    
    for(int i=0; i<=n; i++){
            if(ch[i] == ' '){
                ReverseChar(ch,s,i-1);
                s = i+1;
            }
    }
    ReverseChar(ch,s,n-1);
}

int main(){
    char ch [] ={'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e','\0'};
    ReverseChar(ch,0,14);
    cout<<ch<<endl;
    reverseWords(ch,15);
    cout<<ch<<endl;
    return 0;
}