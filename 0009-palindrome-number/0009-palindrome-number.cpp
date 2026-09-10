class Solution {
public:
    bool isPalindrome(int x) {
        int n = 0;
        int y = x;
        while(y>0){
            int digit = y % 10;
            if(n > INT_MAX / 10 || (n == INT_MAX / 10 && digit > 7)){
                return false;
            }
            n = n * 10 + digit;
            y = y/10;
        }
        if(n == x){
            return true;
        }
        else{
            return false;
        }
        
    }
};