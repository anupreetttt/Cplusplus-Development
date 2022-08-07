// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Input: strs = ["flower","flow","flight"]
// Output: "fl"


// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0) {
            return "";
        }
        int n = strs[0].size();
        for (int i=0; i < strs.size(); i++) {
            if(n > strs[i].size()){
                n = strs[i].size();
            }        
        }
        string common = "";
        for (int t = 0; t < n; t++) {
            for (int i=1;i<strs.size(); i++) {
                if (strs[0][t] != strs[i][t]) {
                    return common;
                }    
            }
            common += strs[0][t];
        }
        return common;
    }
};