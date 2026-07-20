class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> twoSum;
        mp[nums[0]] = 0;
        for(int i=1;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                if(mp[target-nums[i]]<i){
                    twoSum.push_back(mp[target-nums[i]]);
                    twoSum.push_back(i);
                }else{
                    twoSum.push_back(i);
                    twoSum.push_back(mp[target-nums[i]]);
                }
                break;
            }
            mp[nums[i]] = i;
        }
        return twoSum;
    }
};
