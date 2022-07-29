// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

// Input: nums = [1,2,3,4]
// Output: false

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) {
            return false;
        }
        
        std::sort(nums.begin(), nums.end());
       // int check = nums[0];
        for (int i = 0; i < nums.size() -1; i++) {
            if (nums[i] == nums[i+1]) {
                return true;
            } 
            //else {
            //      return false;
            // }
        }
        return false;
    }
};
