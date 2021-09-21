class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()){
            return false;
        }
        int arr[26]={0};
        
        for(int i=0; i<s.size(); i++){
            arr[s[i]-97]++;
        }
        
        for(int i=0; i<26; i++){
            cout<<arr[i]<<" ";
        }
        
        for(int j=0; j<t.size(); j++){
            arr[t[j]-97]--;
        }
        cout<<endl;
        
        for(int i=0; i<26; i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0; i<26; i++){
            if(arr[i] != 0 ){
                return false;
            }
        }
        
        return true;
    }
};
