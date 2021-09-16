class Solution {
public:
    
    string largestNumber(vector<int> &nums) {
        vector<string> vec;
        for(auto i:nums) vec.push_back(to_string(i));
        sort(vec.begin(), vec.end(), [](string &s1, string &s2){ 
            cout<<" s1 "<<s1<<" s2 "<<s2;
            return s1+s2>s2+s1; 
        });
        string str;
        for(auto it:vec) str+=it;
        if(str[0]=='0') return "0";
        return  str;
    }
       
};
