class Solution {
public:
    int myAtoi(string str) {
        bool flag = true;
        int res = 0, i = 0;
        for(; i < str.size(); ++i){
            if(str[i] == ' ') continue;
            else if(str[i] == '+'){
                ++i;
                break;
            }
            else if(str[i] == '-'){
                ++i;
                flag = false;
                break;
            }else if(str[i] < 58 && str[i] > 47)break;
            else return 0;
        }
        
        for(; i < str.size(); ++i){
            if(str[i] < 58 && str[i] > 47){
                if(res >= INT_MAX / 10){
                    if(res == INT_MAX / 10){
                        if(flag && str[i] > 55) return INT_MAX;
                        if(!flag && str[i] > 56) return INT_MIN;
                    }else{
                        if(flag) return INT_MAX;
                        return INT_MIN;
                    }
                }
                res = res * 10 + (str[i] - 48);
            }else{
                if(flag) return res;
                return 0 - res;
            }
        }
        
        if(flag) return res;
        return 0 - res;
    }
};
