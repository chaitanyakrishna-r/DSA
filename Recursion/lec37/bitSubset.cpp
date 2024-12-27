//using bit manipulation

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> subset(vector<int>& nums ){
    vector<vector<int>> result;
    int n = nums.size();
    for(int i = 0; i<(1 << n); i++ ){
        vector<int> output;
        for(int j=0; j < n; j++){
            if(i & (1 << j)){
                output.push_back(nums[j]);
            }
        }
        result.push_back(output);
    }
    return result;
}
void printVector(vector<vector<int>>& results){
    for(const auto& subset : results ){
        cout<<"{ ";
        for(int num : subset){
            cout<<num<<" ";
        }
        cout<<"}";
    }
}

int main(){
    vector<int> nums ={1,2,3};
    vector<vector<int>> results = subset(nums);

    printVector(results);
    
    return 0;
}