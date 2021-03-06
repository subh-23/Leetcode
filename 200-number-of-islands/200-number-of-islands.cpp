void dfs(int i,int j, int m, int n, vector<vector<char>>&grid){
    if(i<0 || j<0 || i==m || j==n || grid[i][j]=='0') return;
    grid[i][j]='0';
        dfs(i,j-1,m,n,grid);
        dfs(i,j+1,m,n,grid);
        dfs(i+1,j,m,n,grid);
        dfs(i-1,j,m,n,grid);
}
void bfs(int i,int j, int m, int n, vector<vector<char>> &grid){
    queue<pair<int,int>>q;
    q.push({i,j});
    while(!q.empty()){
        auto node = q.front();q.pop();
        i=node.first,j=node.second;
        if(i<0 || j<0 || i==m || j==n || grid[i][j]=='0') continue;
        grid[i][j]='0';
        q.push({i,j-1});
        q.push({i,j+1});
        q.push({i+1,j});
        q.push({i-1,j});
    }
}
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                if(grid[i][j]=='1'){
                    bfs(i,j,m,n,grid);
                    count++;
                }
        return count;
    }
};