class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size()!=s.size())return false;
        unordered_map<char, int> s1;
        unordered_map<char, int> t1;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            t1[t[i]]++;
        }
        for(auto it: s1){
            if(t1[it.first]!=it.second)return false;
        }
        return true;
    }
};
