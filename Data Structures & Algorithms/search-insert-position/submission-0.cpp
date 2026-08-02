class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int low = 0, high = nums.size() - 1, ind = 0;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] < target) {
                ind = mid + 1;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ind; 
    }
};
