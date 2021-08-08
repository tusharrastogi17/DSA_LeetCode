class Solution {
public:
    int addDigits(int num) {
        
      while(num>9){
            int ans=0;
            int k = num;
            while(k){
                ans+=(k%10);
                k/=10;
            }
            num=ans;
        }
        return num;
    }
};
