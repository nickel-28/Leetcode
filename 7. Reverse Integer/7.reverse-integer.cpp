class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x){
            // long long rem = x % 10;
            ans= ans * 10 + x%10;
            x=x/10;
            
        }
        return (ans<INT_MIN || ans>INT_MAX)? 0: ans;
        
    }
};