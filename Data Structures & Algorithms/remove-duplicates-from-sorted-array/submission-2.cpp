class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 0, n = nums.size();

        while(i < n && j < n) {
            while(i < n && j < n && nums[j] == nums[i]) {
                j++;
            }
            i++;
            if(j < n)
                nums[i] = nums[j];
        }
        return i;
    }
};