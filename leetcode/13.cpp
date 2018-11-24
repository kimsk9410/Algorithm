class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int sLen = s.size(), result = 0;
        
        for(int i = 0; i < sLen; ++i){
            if(i < (sLen - 1) && m[s[i]] < m[s[i + 1]]){
                result += m[s[i + 1]] - m[s[i]];
                ++i;
            }else
                result += m[s[i]];
        }
        return result;
    }
};
