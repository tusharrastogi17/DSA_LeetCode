class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> r;
        int v=0,c=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                v=i;
                c++;
            }
        }
        if(nums.size()==0 || c==0){
            r.push_back(-1);
            r.push_back(-1);
        }
        else{
            r.push_back(v-c+1);
            r.push_back(v);
        }
        cout<<endl<<" "<<v-c+1<<" "<<v<<" "<<c;
        return r;
    }
};
