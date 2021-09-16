class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int r=0;
        if(target==0){
            return r;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                r=i;
                break;
            }
            if(nums[i]<target){
                r=i+1;
            }
        }
        return r;
        
    }
};
