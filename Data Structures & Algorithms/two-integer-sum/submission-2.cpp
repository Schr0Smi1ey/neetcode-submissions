class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }
        for(int i = 0; i < n; i++) {
            cout << target - nums[i] << endl;
            if(mp.find(target - nums[i]) != mp.end()) {
                if(nums[i] == target - nums[i]) {
                    if(mp[nums[i]].size() >= 2)
                        return {mp[nums[i]][0], mp[nums[i]][1]};
                }
                else {
                    return {i, mp[target - nums[i]][0]};
                }
            }     
        }
    }
};
