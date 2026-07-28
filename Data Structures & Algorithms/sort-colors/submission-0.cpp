class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int k = j + 1, l = j;
                while(k < n && nums[l] > nums[k]) {
                    swap(nums[l], nums[k]);
                    k++;
                    l++;
                }
            }
        }
    }
};