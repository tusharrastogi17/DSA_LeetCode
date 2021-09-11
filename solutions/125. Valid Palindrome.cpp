class Solution {
public:
    bool isPalindrome(string s) {
        
        string str,q;
        int t=0;
        while(t<s.length()){
            if(s[t]>='A' && s[t]<='Z') {
                 str+=s[t]+32;
            }
            else if((s[t]>='a' && s[t]<='z') || (s[t]>='0' && s[t]<='9')){
                str+=s[t];
            }
          t++  ;
        }
        q=str;
         reverse(q.begin(),q.end());
    
        if ( q.compare(str)==0 ) 
            return 1;
        else 
            return 0;
    }
};
