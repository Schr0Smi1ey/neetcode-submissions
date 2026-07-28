// Time Complexity	O(n^2⋅klogk)
// Space Complexity	O(nk)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        unordered_map<string, vector<string>> mp;

        for(auto s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }
    
        for(auto it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
