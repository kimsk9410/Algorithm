class Solution {
public:
    bool isPalindrome(int x) {
        if(x >= 0 && x < 10) return true;
        if(x < 10 || x % 10 == 0) return false;
        
        int half = 0;
        while(x > half){
            half = half * 10 + x % 10;
            x /= 10;
        }
        if(x == half || x == half / 10) return true;
        return false;
    }
};