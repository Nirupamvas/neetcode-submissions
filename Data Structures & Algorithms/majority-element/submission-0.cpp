class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maj = (nums.size()%2==0?nums.size():nums.size()+1)/2;
        cout<<maj;
        int k = 0;
        for(auto it: mp){
            if(it.second>=maj){
                k =  it.first;
                break;
            }
        }
        return k;
    }
};