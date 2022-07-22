class Solution {
public:
    bool isPalindrome(int x) {
        // int reverse = 0;
        // int num = x;
        // if(x < 0){
        //     return false;
        // }
        // while(x > 0) {
        //     reverse = reverse * 10 + x % 10;
        //     x = x/10;
        // } 
        // if(num == reverse) {
        //     return true;
        // } else {
        //     return false;
        // }
           int rev=0,val;
   val = x;
   while(x > 0) {
      rev = rev * 10 + x % 10;
      x = x / 10;
   }
   if(val==rev)
   return true;
   else
    return false;
    }
};