class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin(), piles.end());
        int n=piles.size();
        int low=1, high=*max_element(piles.begin(), piles.end());
        int k=0;
        while(low<=high) {
            k=(low+high)/2;
            long long int sum=0;
            for(int i=0; i<n; i++){
                sum+=ceil(1.0 * piles[i] / k);
            }
            if(sum>h) low=k+1;
            else high=k-1;
            
        }
        return low;
        
    }
};