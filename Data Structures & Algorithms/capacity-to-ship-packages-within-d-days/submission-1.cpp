class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size(), l = 1 , h = 1e8, ans = 1;

        while(l <= h) {
            int mid = (l + h) / 2;
            int temp = days, sum = 0;
            for(int i = 0; i < n; i++) {
                sum += weights[i];
                if(weights[i] > mid) {
                    temp = -1;
                    break;
                }
                if(sum >= mid) {
                    temp--;
                    sum = (sum == mid) ? 0: weights[i];
                }
            }
            if(temp - (sum > 0) >= 0) {
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