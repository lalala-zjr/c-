class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++){
            while(i!=nums[i]){
                if(nums[i]==nums[nums[i]])
                    return nums[i];
                swap(nums[i],nums[nums[i]]);
            }
        }
        return 0;
    }
};