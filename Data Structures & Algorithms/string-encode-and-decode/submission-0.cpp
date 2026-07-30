class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto str : strs) {
            res.append(to_string(str.length()));
            res.append("#");
            res.append(str);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        for(int i = 0; i < s.size(); i++) {
            string temp = "";
            while(s[i] != '#') {
                temp += s[i];
                i++;
            }
            i++;
            int len = stoi(temp), j = i;
            temp = "";
            for(j = i; j < len + i; j++) {
                temp += s[j];
            }
            i = j - 1;
            strs.push_back(temp);
        }
        return strs;
    }
};
