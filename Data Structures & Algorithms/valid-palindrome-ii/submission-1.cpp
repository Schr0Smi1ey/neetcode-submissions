class Solution {
public:
    bool checkPalindrome(string s, int i, int j) {
        while(i <= j) {
            if(s[i] == s[j]) {
                i++; j--;
                continue;
            }
            return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        bool removed = false;
        int i = 0, j = s.size() - 1;
        while(i <= j) {
            if(s[i] == s[j]) {
                i++; j--;
                continue;
            }
            return (checkPalindrome(s, i + 1, j) | checkPalindrome(s, i, j - 1));
        }
        return true;
    }
};