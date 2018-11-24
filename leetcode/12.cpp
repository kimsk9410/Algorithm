class Solution {
public:
    string intToRoman(int num) {
        char romanArr[4][2] = {{' ', 'M'}, {'D', 'C'}, {'L', 'X'}, {'V', 'I'}};
        string result = "";
        
        int denominator = 1000;
        for(int i = 0; i < 4; ++i){
            int repeat = num / denominator;
            num %= denominator;
            denominator /= 10;
            if(repeat == 4){
                result += romanArr[i][1];
                result += romanArr[i][0];
            }else if(repeat == 9){
                result += romanArr[i][1];
                result += romanArr[i - 1][1];
            }else if(repeat > 0){
                if(repeat > 4){
                    result += romanArr[i][0];
                    repeat -= 5;
                }
                while(repeat--){
                    result += romanArr[i][1];
                }
            }
        }
        
        return result;
    }
};
