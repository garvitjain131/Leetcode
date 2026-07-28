class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }

        vector<pair<char, int>> vec;
        for (auto it : mp) {
            vec.push_back(it);
        }
        
        sort(vec.begin(), vec.end(), [](pair<char, int> &a, pair<char, int> &b) {
            return a.second > b.second;
        });
        
        string ans = "";
        for (auto it : vec) {
            ans.append(it.second, it.first);
        }
        return ans;
    }
};