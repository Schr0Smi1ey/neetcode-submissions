class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, o = 0, t = 0;
        for(int i = 0; i < nums.size(); i++) {
            z += (nums[i] == 0);
            o +=  (nums[i] == 1);
            t += (nums[i] == 2);
        }
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = (i < z) ? 0: i < o + z ? 1: 2;
        }
    }
};