class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int k) {
        int l = 1, h = 1e9 + 5, n = piles.size(), ans = 1;

        while(l <= h) {
            int mid = l + (h - l) / 2;
            bool flag = true;
            int temp = k;
            for(int i = 0; i < n; i++) {
                temp -= (piles[i] / mid + (piles[i] % mid > 0));
            }
            if(temp >= 0) {
                ans = mid;
                h = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
