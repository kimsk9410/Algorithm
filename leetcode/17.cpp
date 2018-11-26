class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return vector<string>();
        vector<string> letterArr = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result = {""};
        for(int i = 0; i < digits.size(); ++i){
            int num = digits[i] - 50;
            int resultSize = result.size();
            for(int j = 0; j < letterArr[num].size(); ++j){
                for(int k = 0; k < resultSize; ++k){
                    result.push_back(result[k] + letterArr[num][j]);
                }
            }
            result.erase(result.begin(), result.begin() + resultSize);
        }
        
        return result;
    }
};
