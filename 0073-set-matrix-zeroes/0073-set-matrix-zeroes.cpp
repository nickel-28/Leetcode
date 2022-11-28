class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int> row_Marker(row, 1);
        vector<int> col_Marker(col, 1);
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    row_Marker[i]=0;
                    col_Marker[j]=0;
                }
            }
        }
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(row_Marker[i]==0 || col_Marker[j]==0)
                    matrix[i][j]=0;
            }
        }
        
    }
};