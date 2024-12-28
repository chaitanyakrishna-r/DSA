#include<iostream>
#include<vector>
using namespace std;


 void solve(string digits, string output, int index, vector<string>& ans, string mapping[]){

    //base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';
    string value = mapping[num];
   
    for(int i=0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(digits, output, index +1, ans, mapping);
        output.pop_back();
    }

}
void printVector(vector<string> result){
    for(const auto& str: result){
       cout<<str<<" ";
    }cout<<endl;
}
int main(){
    string digits = "245";

    vector<string> ans;
    if(digits.length() == 0){
        return 0;
    }

    string output;
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits, output, index, ans, mapping) ;
    printVector(ans);
    
    return 0;
}