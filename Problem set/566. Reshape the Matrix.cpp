// In MATLAB, there is a handy function called reshape which can reshape an m x n matrix into a new one with a different size r x c keeping its original data.

// You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.

// The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

// If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

// Input: mat = [[1,2],[3,4]], r = 1, c = 4
// Output: [[1,2,3,4]]

class Solution {
 public:
  vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
    if (nums.empty() || r * c != nums.size() * nums[0].size())
      return nums;

    vector<vector<int>> ans(r, vector<int>(c));
    int k = 0;

    for (const auto& row : nums)
      for (const int num : row) {
        ans[k / c][k % c] = num;
        ++k;
      }

    return ans;
  }
};