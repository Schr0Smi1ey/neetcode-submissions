class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(), ans = 0, i = n - 1;
        while(i < n && s[i] == ' ') {
            i--;
        }
        while(i >= 0 && s[i] != ' ') {
            i--;
            ans++;
        }
        return ans;
    }
};