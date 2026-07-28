class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        vector<string> temp(n);
        vector<bool> checked(n, false);
        
        for(int i = 0; i < n; i++) {
            temp[i] = strs[i];
            sort(temp[i].begin(), temp[i].end());
        }
        for(int i = 0; i < n; i++) {
            if(!checked[i]) {
                ans.push_back({strs[i]});

                for(int j = i + 1; j < n; j++) {
                    if(temp[i] == temp[j]) {
                        ans.back().push_back(strs[j]);
                        checked[j] = 1;
                    }
                }
            }
            
        }
        return ans;
    }
};
