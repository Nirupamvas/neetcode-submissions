class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums[i] = -1;
                c++;
            }
        }
        int i=0, j=nums.size()-1;
        while(i<j){
            if(nums[i]==-1 && nums[j]!=-1){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }else if(nums[j]==-1){
                j--;
            }else if(nums[i]!=-1){
                i++;
            }
        }
        k = nums.size()-c;
        return k;
    }
};