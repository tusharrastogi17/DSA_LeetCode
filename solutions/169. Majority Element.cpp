class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int major = nums[0];
        int major_c = 1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==major)major_c++;
            else major_c--;
            
            if(major_c==0)major=nums[i],major_c=1;
        }
        
        return major;
    }
};
