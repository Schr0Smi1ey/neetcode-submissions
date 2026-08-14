class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int m = n + 2;
        vector<int> suff(m, 0);
        vector<int> pref(m, 0);

        for (int i = 0, j = 1; i < n; i++, j++) {
            pref[j] = nums[i] + pref[j - 1];
        }
        for (int i = n - 1, j = n; i >= 0; i--, j--) {
            suff[j] = suff[j + 1] + nums[i];
        }
        for (int i = 0; i < n; i++) {
            if (pref[i] == suff[i + 2]) {
                return i;
            }
        }

        return -1;
    }
};