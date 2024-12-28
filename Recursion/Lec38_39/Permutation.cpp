#include <iostream>
#include <vector>
using namespace std;

// Function to generate permutations using backtracking
void solve(vector<int>& nums, int index, vector<vector<int>>& ans) {
    // Base case: when index reaches the size of the array, add the current permutation to the result
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }

    // Swap elements to generate permutations
    for (int j = index; j < nums.size(); j++) {
        swap(nums[index], nums[j]);  // Swap current element with the next element
        solve(nums, index + 1, ans);  // Recur with the next index
        swap(nums[index], nums[j]);  // Backtrack by swapping back
    }
}

// Function to print the result (permutations)
void printPermutations(const vector<vector<int>>& permutations) {
    for (const auto& perm : permutations) {
        cout << "{ ";
        for (int num : perm) {
            cout << num << " ";
        }
        cout << "} ";
    }
    cout << endl;
}

// Main function to generate permutations of the given vector
int main() {
    vector<int> nums = {1, 2, 3};  // Example input
    vector<vector<int>> result;    // To store all the permutations

    // Start the recursion to generate permutations
    solve(nums, 0, result);
    
    // Print all the permutations
    cout << "Permutations: " << endl;
    printPermutations(result);

    return 0;
}
