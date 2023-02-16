class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // imp concept:
        // No of Missing Number till a particular index = (arr[index] - 1 - index)
        
        int l=0, h=arr.size()-1;
        
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(arr[mid]-1-mid < k){
                l=mid+1;
            }
            else
                h=mid-1;
            
            
        }
        
        return l+k;
        
    }
};