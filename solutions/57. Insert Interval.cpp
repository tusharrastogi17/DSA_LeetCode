class Solution {
public:
   vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> ans;
        int i=0;
        
        while(i<n)
        {
            vector<int> v = intervals[i];
            if(v[1] < newInterval[0])
            {
                ans.push_back(v);
                i++;
            }
            else
                break;
        }
        
        int mini = newInterval[0];
        int maxi = newInterval[1];
        while(i<n)
        {
            vector<int> v = intervals[i];
            if(v[0] > newInterval[1])
                break;
            else
            {
                mini = min(mini, v[0]);
                maxi = max(maxi, v[1]);
                i++;
            }
        }
        ans.push_back({mini,maxi});
        
        while(i<n)
            ans.push_back(intervals[i++]);
        
        return ans;
        
    }
};
