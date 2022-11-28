class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
            
        }
        
        // for(int i=0; i<nums.size(); i++){
        //    cout<<nums[i]<<" ";
        // }
        // vector<int> result;
        int i=0, j=0;
        while(j<positive.size()){
            nums[i]=positive[j];
            // result.push_back(positive[j]);
            i+=2;
            j++;
        }
        int m=1, n=0;
        while(n<negative.size()){
        nums[m]=negative[n];
            // result.push_back(negative[n]);
            m+=2;
            n++;
        }
        
        return nums;
    }
    
};