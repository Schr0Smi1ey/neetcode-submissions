class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size(), p = 0, q = 0, diff = abs(arr[0] - x);
        for(int i = 1; i < n; i++) {
            if(abs(arr[i] - x) < diff) {
                p = q = i;
                diff = abs(arr[i] - x);
            }
        }

        vector<int> ans;
        ans.push_back(arr[p]);
        p--;q++;
        while(ans.size() < k) {
            if(p >= 0 && q < n) {
                int l = abs(arr[p] - x), m = abs(arr[q] - x);
                if(l <= m) {
                    ans.push_back(arr[p--]);
                }
                else {
                    ans.push_back(arr[q++]);
                }
            }
            else if(p >= 0) {
                ans.push_back(arr[p--]);
            }
            else {
                ans.push_back(arr[q++]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};