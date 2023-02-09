class Solution {
public:
    bool ok(int mid, vector<int> &weights, int days) {
        int n=weights.size();
        int d=1;
        int total=0;
        bool isValid=true;
        for(int i=0; i<n; i++){
            if(weights[i]>mid) isValid=false;
            if(total+weights[i]<=mid) total+=weights[i];
            else{
                d++;
                total=weights[i];
            }
        }
        
        if(!isValid) return false;
        else return(d<=days);
        
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int l=1;
        int r=5000*500;
        while(l<r) {
            int mid=(l+r)/2;
            if(ok(mid, weights, days))
                r=mid;
            else l=mid+1;
        }
        return l;
    }
};