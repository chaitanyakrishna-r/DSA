#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> ans ={1,2,3,4,5};
    for(const auto& num : ans){
        cout<<num<<" ";
    }cout<<endl;
    return 0;
}