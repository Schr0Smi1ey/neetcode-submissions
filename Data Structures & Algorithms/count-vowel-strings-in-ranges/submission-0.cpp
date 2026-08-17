class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> preSum(n + 5, 0);
        string vowel = "aeiou";
        for(int i = 0; i < n; i++) {
            preSum[i + 1] = (vowel.contains(words[i][0]) && vowel.contains(words[i].back()));
        }
        for(int i = 1; i <= n; i++) {
            preSum[i] += preSum[i - 1];
        }
        vector<int> ans;
        for(auto q : queries) {
            int l = q[0], r = q[1];
            ans.push_back(preSum[r + 1] - preSum[l]);
        }
        return ans;
    }
};