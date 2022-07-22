class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int m;
        int n;
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++){
                if(nums[i] + nums[j] == target) {
                    m = i;
                    n =j;
                }
            }
        }
        return {m,n};
    }
};