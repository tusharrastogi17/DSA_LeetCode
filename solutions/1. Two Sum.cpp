class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> r;
        int s=nums.size();
        for(int i=0; i<s; i++)
        {
            for(int j=0; j<s; j++)
            {
                if((nums[i]+nums[j])== target)
                {
                    r.assign({i,j});
                    break;
                }
            }
        }
      
        
        return r;
    }
};
