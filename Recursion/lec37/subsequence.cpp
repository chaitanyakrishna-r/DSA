#include<iostream>
#include<vector>
using namespace std;

void solve(string str, string output, int i, vector<string>& ans){
    
    //base case
    if(i >= str.length()){
        ans.push_back(output);
        return;
    }

    //exclude
    solve(str, output, i +1, ans);

    //include
    output.push_back(str[i]);
    solve(str, output, i +1, ans);
}

vector<string> subsequence(string& str){
    vector<string> ans;
    string output="";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}


int main(){
    string str = "abc";
    vector<string> result = subsequence(str);
    cout<<"before result"<<endl;
    // cout<<result;

    for(const auto& sub: result){
        cout<<sub<<" ";
    }

    cout<<endl;
    return 0;
}