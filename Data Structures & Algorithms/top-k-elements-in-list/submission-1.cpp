class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(auto num : nums) {
            mp[num]++;
        }
        vector<vector<int>> bucket(n + 1);
        for(auto it: mp) {
            bucket[it.second].push_back(it.first);
        }
        vector<int> ans;
        for(int i = n; i >= 1; i--) {
            if(bucket[i].size()) {
                for(auto it : bucket[i]) {
                    if(ans.size() == k)
                        break;
                    ans.push_back(it);
                }
            }
        }
        return ans;
    }
};
