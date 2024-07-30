#include<iostream>
#include<string>
using namespace std;

void RemoveAllOccuurences(string &str, string part){
   while(str.length()!=0 && str.find(part) < str.length()){
    str.erase(str.find(part),part.length());
   }
}


int main(){
    string str ="dabcdaabcsd";
    string part ="abc";
    RemoveAllOccuurences(str,part);
    cout<<str<<endl;
    return 0;
}