class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 0)
            return "";
        int start = 0, end = 0;
        for(int i = 0; i < s.size(); ++i){
            int left = i, right = i;
            while(left >= 0 && right < s.size() && s[left] == s[right]){
                --left;
                ++right;
            }
            if(right - left >= end - start){
                start = left;
                end = right;
            }
            left = i, right = i + 1;
            while(left >= 0 && right < s.size() && s[left] == s[right]){
                --left;
                ++right;
            }
            if(right - left >= end - start){
                start = left;
                end = right;
            }
        }
        return s.substr(start + 1, end - start - 1);
    }
};
