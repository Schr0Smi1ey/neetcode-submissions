class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size(), i = 0, j = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
            if(mp.size() < (i - j + 1)) {
                return true;
            }
            if(i >= k) {
                mp[nums[j]]--;
                if(mp[nums[j]] == 0) {
                    mp.erase(nums[j]);
                }
                j++;
            }
        }
        return false;
    }
};