class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> v(size*2);
        int k = nums.size();
        cout<<v.size();
        for(int i=0;i<nums.size();i++){
            v[i] = nums[i];
            v[k] = nums[i];
            k++;
        }
        return v;
    }
};