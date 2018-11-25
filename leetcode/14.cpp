class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() < 2) return strs[0];
        string result = "";
        int idx = 0, sLen = strs.size();
        while(true){
            for(int i = 0; i < sLen - 1; ++i){
                if(idx >= strs[i].size() || idx >= strs[i + 1].size() || strs[i][idx] != strs[i + 1][idx]){
                    return result;
                }
            }
            result += strs[0][idx++];
        }
    }
};
