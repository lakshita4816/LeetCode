class Solution {
public:
    string removeOuterParentheses(string s) {
        int len = s.length();
        int cnt = 0 ; 
        string ans = "";
        for(int i = 0 ; i<len ; i++){
            if ( s[i]==')') cnt--;
            if (cnt != 0) ans+=s[i];
            if ( s[i]=='(') cnt++;
        }
        return ans;
    }
};