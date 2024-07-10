#include<iostream>
using namespace std;


void findDuplicates(int nums[], int length) {
    for (int i = 0; i < length; ++i) {
        int index = abs(nums[i]) - 1; // Calculate index to mark visited

        // Mark nums[index] as visited by negating it
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        } else {
            // If nums[index] is already negative, nums[i] is a duplicate
            cout << "Duplicate found: " << abs(nums[i]) << std::endl;
        }
    }
}
