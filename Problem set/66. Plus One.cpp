// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].

// Input: digits = [9]
// Output: [1,0]
// Explanation: The array represents the integer 9.
// Incrementing by one gives 9 + 1 = 10.
// Thus, the result should be [1,0].

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v = digits;
        int n = digits.size();
        int carry=0;
        for (int i = n - 1; i >=0; i--) {
            ++v[i];
            carry = v[i] / 10;
            v[i] %= 10;
            if (carry == 0)
                return v;
        }
        if(carry > 0) {
            v.insert(v.begin(), carry);
        }
        return v;
    }
};