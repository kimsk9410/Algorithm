class Solution {
public:
    bool isValid(string s) {
        // 40 ( 41 ) 91 [ 93 ] 123 { 125 }
        map<int, int> m = {{41, 40}, {93, 91}, {125, 123}};
        stack<char> st;
        for(int i = 0; i < s.size(); ++i){
            auto it = m.find(s[i]);
            if(it == m.end()) st.push(s[i]);
            else{
                if(st.empty() || st.top() != m[s[i]]) return false;
                st.pop();
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
