class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size() - 1; i++) {
            int remain = target - nums[i];
            int low = i + 1,  high = nums.size() - 1;
            while(low <= high) {
                int mid = low + (high - low) / 2;
                if(nums[mid] == remain) {
                    return {i + 1, mid + 1};
                }
                else if(nums[mid] < remain) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
    }
};
