void dfs(int i,int j, int m, int n, vector<vector<char>>&grid){
    if(i<0 || j<0 || i==m || j==n || grid[i][j]=='0') return;
    grid[i][j]='0';
        dfs(i,j-1,m,n,grid);
        dfs(i,j+1,m,n,grid);
        dfs(i+1,j,m,n,grid);
        dfs(i-1,j,m,n,grid);
}
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                if(grid[i][j]=='1'){
                    dfs(i,j,m,n,grid);
                    count++;
                }
        return count;
    }
};