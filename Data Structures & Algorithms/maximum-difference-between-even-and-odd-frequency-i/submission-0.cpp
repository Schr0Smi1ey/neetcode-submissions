class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {0};
        for(auto ch : s) {
            freq[ch - 'a']++;
        }
        int maxima = 0, minima = 200;
        for(int i = 0; i < 26; i++) {
            if(freq[i] == 0)
                continue;
            if(freq[i] % 2)
                maxima = max(maxima, freq[i]);
            else 
                minima = min(minima, freq[i]);
        }
        return maxima - minima;
    }
};