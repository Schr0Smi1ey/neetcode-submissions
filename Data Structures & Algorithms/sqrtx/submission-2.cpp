class Solution {
public:
    int mySqrt(int x) {
        long long int low = 1, high = 50000;
        int ans = 0;
        while(low <= high) {
            long long int mid = low + (high - low) / 2;
            if((mid * mid) == x) {
                ans = mid;
                break;
            }
            else if((mid * mid) < x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};