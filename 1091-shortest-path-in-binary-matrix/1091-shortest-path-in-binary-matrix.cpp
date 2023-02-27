class Solution {
public:
    bool isValid(int x, int y, int m, int n, vector<vector<int>>& grid){
        return x>=0 and x<m and y>=0 and y<n and grid[x][y]==0;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(grid[0][0] == 1) return -1;
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        dist[0][0] = 0;
        
        int dx[] = {-1,-1,-1,0,0,1,1,1};
        int dy[] = {-1,0,1,-1,1,-1,0,1};
        
        queue<pair<int, pair<int,int>>> q;
        q.push({0, {0, 0}});
        
        while(!q.empty()){
            int distance = q.front().first, x = q.front().second.first, y = q.front().second.second;
            q.pop();
            // iterate through all nbrs
            for(int i=0; i<8; i++){
                int newX = x + dx[i];
                int newY = y + dy[i];
                if(isValid(newX, newY, m, n, grid) and distance + 1 < dist[newX][newY]){
                    dist[newX][newY] = distance + 1;
                    q.push({distance+1, {newX, newY}});
                }                
            }
        }
        if(dist[m-1][n-1] == INT_MAX) return -1;
        return dist[m-1][n-1]+1;
    }
};