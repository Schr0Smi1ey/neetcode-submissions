class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        unordered_map<char, int> mp1, mp2;
        for(auto ch : s1) {
            mp1[ch]++;
        }
        int j = 0;
        for(int i = 0; i < n2; i++) {
            mp2[s2[i]]++;
            if(i >= (n1 - 1)) {
                if(mp1 == mp2) {
                    return true;
                }
                mp2[s2[j]]--;
                if(mp2[s2[j]] == 0) {
                    mp2.erase(s2[j]);
                }
                j++;
            }   
        }
        return false;
    }
};
