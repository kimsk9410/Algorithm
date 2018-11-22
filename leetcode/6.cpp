class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows >= s.size() || numRows == 1)
            return s;
        int numTurn = numRows + numRows - 2;
        string result = "";
        
        for(int i = 0; i < numRows; ++i){
            if(i == 0 || i == numRows - 1){
                int idx = i;
                while(idx < s.size()){
                    result += s[idx];
                    idx += numTurn;
                }
            }else{
                int idx = i;
                int secondIdx = numTurn - i;
                while(secondIdx < s.size()){
                    result += s[idx];
                    idx += numTurn;
                    result += s[secondIdx];
                    secondIdx += numTurn;
                }
                if(idx < s.size())
                    result += s[idx];
            }
        }
        return result;
    }
};
