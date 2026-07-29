class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> suff(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int i = 1; i < n; i++) {
            nums[i] *= nums[i - 1];
        }
        for(int i = n - 2; i >= 0; i--) {
            suff[i] *= suff[i + 1];
        }
        
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(i == 0) {
                ans.push_back(suff[i + 1]);
                continue;
            }
            if(i == n - 1) {
                ans.push_back(nums[i - 1]);
                continue;
            }
            ans.push_back(nums[i - 1] * suff[i + 1]);
        }
        return ans;
    }
};
