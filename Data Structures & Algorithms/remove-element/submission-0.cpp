class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size(), k = 0;
        for(int i = 0; i < n; i++) {
            k += (nums[i] != val);
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] == val) {
                for(int j = i + 1; j < n; j++) {
                    if(nums[j] != val) {
                        swap(nums[i], nums[j]);
                    }
                }
            }
        }
        return k;
    }
};