class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int temp[n];
        int k=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                temp[k]=nums[i];
                k++;
            }
        }
        while(k<n){
            temp[k]=0;
            k++;
        }
        for(int i=0; i<n; i++) nums[i]=temp[i];
        // cout<<temp;
    }
};