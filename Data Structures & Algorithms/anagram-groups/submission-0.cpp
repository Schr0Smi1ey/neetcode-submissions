class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<bool> checked(n, false);
        for(int i = 0; i < n; i++) {
            if(!checked[i]) {
                ans.push_back({strs[i]});
                string pivot = strs[i];
                sort(pivot.begin(), pivot.end());

                for(int j = i + 1; j < n; j++) {
                    string now = strs[j];
                    sort(now.begin(), now.end());
                    if(pivot == now) {
                        ans.back().push_back(strs[j]);
                        checked[j] = 1;
                    }
                }
            }
            
        }
        return ans;
    }
};
