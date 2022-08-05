// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.



class Solution {
public:
    int firstUniqChar(string s) {
        
        // for (int i = 0; i< s.size(); i++) {
        //     int count = 0;
        //     for(int j = 0; j < s.size(); j++) {
        //         if(s[i] == s[j]) {
        //             count++;
        //             if(count == 2){
        //                 break;
        //             }
        //         }
        //     }
        //     if(count == 1) {
        //         return i;
        //     }
        // }
        // return -1;
        
        
        int count[26];
        for (int i=0;i<26;i++)
            count[i] = 0;
        
        for (int i=0;i<s.size(); ++i) {
            ++count[s[i]-'a'];
        }
        for(int i=0;i<s.size(); ++i){
            if (count[s[i]-'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};