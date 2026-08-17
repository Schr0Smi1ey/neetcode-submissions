class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(auto s : details) {
            int age = (s[12] - '0') + ((s[11] - '0') * 10);
            cnt += (age > 60);
        }
        return cnt;
    }
};