class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto num : nums) {
            mp[num]++;
            if(mp.size() > 2) {
                unordered_map<int, int> temp;
                for(auto it : mp) {
                    if(it.second > 1) {
                        temp[it.first] = it.second - 1;
                    }
                }
                mp = temp;
            }
        }
        vector<int> ans;
        for(auto it : mp) {
            int freq = 0;
            for(auto num : nums) {
                freq += (num == it.first);
            }
            if(freq > (nums.size() / 3)) 
                ans.push_back(it.first);
        }
        return ans;
    }
};