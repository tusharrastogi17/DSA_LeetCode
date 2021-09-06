class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        int k=1;
        if (l==0)
            return 0;
        
        for (int i=1; i<l; i++){
            if (nums[i] != nums[i-1])
                nums[k++] = nums[i];
            
        }
        return k;
    }
};
