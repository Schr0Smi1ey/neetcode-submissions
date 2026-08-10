class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> mp;
        int n = emails.size();
        for(auto s : emails) {
            string local_name = "", domain_name = "";
            int n = s.size();
            bool flag = false, plus = false;
            for(int i = 0; i < n; i++) {
                if(s[i] == '@')
                    flag = true;
                if(flag) {
                    domain_name += s[i];
                }
                else {
                    if(s[i] == '.' || plus)
                        continue;
                    if(s[i] == '+') {
                        plus = true;
                        continue;
                    }
                    local_name += s[i];
                }
            }
            mp[local_name + domain_name]++;
        }
        return mp.size();
    }
};