class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> v;
        for(int i=0;i<strs.size();i++){
            string sv = strs[i];
            sort(sv.begin(), sv.end());
            mp[sv].push_back(strs[i]);
        }
        int i=0;
        for(auto it: mp){
            v.push_back(it.second);
           // i++;
        }
        return v;
    }
};
