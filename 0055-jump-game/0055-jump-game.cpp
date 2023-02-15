class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int minJump=0;
        for(int i=n-2; i>=0; i--) {
            minJump++;
            if(nums[i]>=minJump){
                minJump=0;
            }
        }
        
        // if(minJump==0) return true;
        // else return false;
        
        // return minJump==0; // another way of writing
        
        return !minJump;  // another way of writing :)
        
    }
};