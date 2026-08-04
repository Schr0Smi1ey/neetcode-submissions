class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), ans = 0, i = 0, j = 0;
        unordered_map<int, int> mp;
        while(i < n) {
            while(mp[s[i]] > 0) {
                mp[s[j]]--;
                if(mp[s[j]] == 0) {
                    mp.erase(s[j]);
                }
                j++;
            }
            mp[s[i++]]++;
            ans = max(ans, int(mp.size()));
        }
        return ans;
    }
};
