class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string substring = "";
        int result = 0;
        for(int i = 0; i < s.size(); ++i){
            if(substring.find(s[i]) == -1){
                substring += s[i];
                result = result > substring.size() ? result : substring.size();
            }else{
                substring = substring.substr(substring.find(s[i]) + 1) + s[i];
            }
        }
        return result;
    }
};
