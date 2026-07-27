class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size(), min_size = strs[0].size();
        for(int i = 0; i < n; i++) {
            min_size = min(min_size, int(strs[i].size()));
        }
        for(int i = 0; i < min_size; i++) {
            char c = strs[0][i];
            for(int j = 1; j < n; j++) {
                if(strs[j][i] != c) 
                    return ans;
            }
            ans += c;
        }
        return ans;
    }
};