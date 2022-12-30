class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum1=0, sum2=0;
        int od=0, ev=0, fin=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i==j) {
                    sum1+=mat[i][j];
                    if(n%2==0){
                        fin=sum1;
                    }
                    else fin=sum1-mat[i/2][j/2];
                }
                    
                if((i+j)==(n-1)) sum2+=mat[i][j];
                
            }
        }
        
        return fin+sum2;
        
    }
};