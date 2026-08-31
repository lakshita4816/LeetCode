class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        string result = "";
        for(int i = 0 ; i<first.length();i++){
            if(i>=last.length() || first[i] !=last[i]){
                break;
            }
            result += first[i];
            
        }
        return result;
    }
};