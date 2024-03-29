// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

// Input: nums = [5,4,-1,7,8]
// Output: 23

// Input: nums = [1]
// Output: 1

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int max = INT_MIN;
        int curr = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            curr = curr + nums[i];
            
            if(curr > max) {
                max = curr;
            } if (curr < 0) {
                curr = 0;
            }
        }
        return max;
    }
};