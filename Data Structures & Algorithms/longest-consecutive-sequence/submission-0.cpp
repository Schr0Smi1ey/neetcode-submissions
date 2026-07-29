class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> mp;
        for(auto num : nums) {
            mp[num] = true;
        }

        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(mp[nums[i] - 1] == false) {
                int temp = nums[i] + 1, cnt = 1;
                while(mp[temp]) {
                    temp++;
                    cnt++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};
