#include<iostream>
#include<vector>
using namespace std;

vector<string> Sequence(string str){
    int n = str.length();
    vector<string> ans;
    string output ="";
    for(int i=1; i < (1 << n); i++ ){
        output.clear();
        for(int j=0; j<n; j++){
            if(i & (1 << j)){
                output.push_back(str[j]);
            }
        }
        ans.push_back(output);
    }
    return ans;
}


int main(){

    string str = "abc";
    vector<string> result = Sequence(str);

    for(const string& ans: result){
        cout<<ans<<" ";
    }
    return 0;
}