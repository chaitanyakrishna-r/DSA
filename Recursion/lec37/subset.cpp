#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& nums, vector<int>& output, int i, vector<vector<int>>& ans){


    //base case
    if(i >= nums.size()){
        ans.push_back(output);
        return;
    }

    // recurive call for exculde
    solve(nums, output, i + 1, ans );

     // recurive call for inculde
     int element = nums[i];
     output.push_back(element);
    solve(nums, output, i + 1, ans );

    output.pop_back();
}

vector<vector<int>> subset(vector<int> nums){
    
    vector<vector<int> > ans;
    vector<int> output;

    int index = 0 ;
    solve(nums, output, index, ans);
    return ans;
}


int main(){
    vector<int> nums ={1,2,3};
    vector<vector<int>> result = subset(nums);

    //printing the subset
     cout << "Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}