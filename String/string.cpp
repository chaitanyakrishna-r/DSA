#include<iostream>
using namespace std;


int main(){
    char ch[5]={'a','v','c','w','\0'};
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    string s;
    s = "hello world" "\0" "hello ";
    cout<<endl<<s;
    return 0;
}