class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size(), m = t.size();
        map<char, char> mp, np;
        if(n != m) {
            return false;
        }
        for(int i = 0; i < n; i++) {
            if(mp.find(t[i]) != mp.end() && mp[t[i]] != s[i]) {
                return false;
            }
            if(np.find(s[i]) != np.end() && np[s[i]] != t[i]) {
                return false;
            }
            mp[t[i]] = s[i];
            np[s[i]] = t[i];
        }
        return true;
    }
};