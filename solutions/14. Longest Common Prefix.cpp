class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string r="";
    
        
        if(strs.size()==0)
        {
            return r;
        }
        for( int i=0; i<strs[0].length(); i++)
        {
            for(int j=1; j<strs.size(); j++)
            {
                if(strs[j][i]!=strs[0][i] || strs[j].length()==i)
                {
                    return r;
                }
            }
             r+=strs[0][i];
        }  
        return r;
    }
};
