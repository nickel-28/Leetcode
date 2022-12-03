class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        int l=0, h=n;
        // int m = (l+h)/2;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target) return m;
            else if(nums[m]>target){
                h=m-1;
            }
            else l=m+1;
        }
        
        // return search(nums, target);
        return -1;
    }
};