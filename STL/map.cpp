#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int, string> m;
    m[1]="chaitanya" ;
    m[2]="krishna" ;
    m[10]="world"; 

    m.insert({5,"hello"});

    for(auto i:m){
        cout<<i.first<< " " <<i.second<<endl;
    }
    return 0;
}