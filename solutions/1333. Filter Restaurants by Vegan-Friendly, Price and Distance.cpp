class Solution {
public:
    bool static check( vector<int>&x, vector<int>&y ){
        if(x[1]==y[1]){
             
            return x[0]>y[0];
        }
        return x[1]>y[1];
    }
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        
        vector<int> res;
        vector<vector<int>> r;
        for(auto i:restaurants){
            if(veganFriendly==1){
                if(i[2]==veganFriendly && i[3]<=maxPrice && i[4]<=maxDistance){
                    r.push_back({i[0],i[1]});
                }
            }
            else{
                if(i[3]<=maxPrice && i[4]<=maxDistance){
                    r.push_back({i[0],i[1]});
                }    
            }
        }
        
        sort(r.begin(), r.end(), check);
        for(auto i:r){  
            res.push_back(i[0]);
        }
        return res;
    }
};
