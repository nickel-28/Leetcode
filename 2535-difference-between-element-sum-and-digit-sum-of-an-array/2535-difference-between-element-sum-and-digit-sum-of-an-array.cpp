class Solution {
public:
    int solver(int dig){
        int sum=0;
        while(dig>0) {
            int r=dig%10;
            sum=sum+r;
            dig/=10;
        }
        return sum;
    }
    
    int differenceOfSum(vector<int>& nums) {
        int elem=0, dig=0;
        for(int i=0; i<nums.size(); i++) {
            elem+=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            // solver(nums[i]);
            dig+=solver(nums[i]);
        }
        
        return abs(elem-dig);
        
    }
};