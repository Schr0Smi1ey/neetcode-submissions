class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        unordered_map<string, vector<string>> mp;

        for(auto s : strs) {
            string key = "";
            int fre[26] = {0};
            for(auto ch : s) {
                fre[ch - 'a']++;
            }
            for(auto f : fre) {
                key += "#" + to_string(f);
            }
            mp[key].push_back(s);
        }
    
        for(auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
