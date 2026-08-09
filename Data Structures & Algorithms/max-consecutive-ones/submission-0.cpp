class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, n = nums.size(), temp = 0;
        for(int i = 0; i < n; i++) {
            temp += (nums[i] == 1);
            if(nums[i] != 1 || i == n - 1) {
                ans = max(ans, temp);
                temp = 0;
            }
        }
        return ans;
    }
};