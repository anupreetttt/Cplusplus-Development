// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.

// Input: s = "()"
// Output: true

// Input: s = "()[]{}"
// Output: true

// Input: s = "(]"
// Output: false

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> tt;
//             for(int i = 0; i<tt.size(); i++) {
//                 if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
//                     tt.push(s[i]);
//                 } else if (tt == ')' && !tt.empty && tt.top == '(') {
//                     tt.pop;
//                 } else if (tt == ']' && !tt.empty && tt.top == '[') {
//                     tt.pop;
//                 } else if (tt == '}' && !tt.empty && tt.top == '{') {
//                     tt.pop;
//                 }
//             }
//         return tt.empty;
//     }
// };

class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                t.push(s[i]);
            } else if(s[i] == ')') {
                if( t.empty() || t.top() != '(') {
                    return false;
                }
                t.pop();
            } else if(s[i] == ']') {
                if( t.empty() || t.top() != '[') {
                    return false;
                }
                t.pop();
            } else if(s[i] == '}') {
                if(t.empty() || t.top() != '{') {
                    return false;
                }
                t.pop();
            }
        }
        return t.empty();
    }
};