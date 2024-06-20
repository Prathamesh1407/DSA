// T.C : O(n2)
// S.C : O(n2)
/*
    class Solution {
    void bfs(int row,int col,vector<vector<char>>& grid,vector<vector<int>>&visited)
    {
        visited[row][col]=1;

        queue<pair<int,int>>q;

        q.push({row,col});
        //co-ordinates
        int rowSize=grid.size();
        int colSize=grid[0].size();
        int deltaRow[]={-1,0,1,0};
        int deltaCol[]={0,1,0,-1};
        while(!q.empty())
        {
            pair<int,int>frontNode=q.front();
            int frow=frontNode.first;
            int fcol=frontNode.second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int newRow=frow+deltaRow[i];
                int newCol=fcol+deltaCol[i];

                if(newRow>=0 && newRow<rowSize && newCol>=0 && newCol<colSize && grid[newRow][newCol]=='1' && visited[newRow][newCol]==0 )
                {
                    visited[newRow][newCol]=1;
                    q.push({newRow,newCol});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && visited[i][j]==0)
                {
                    count++;
                    bfs(i,j,grid,visited);
                }
            }
        }
        return count;
    }
};

*/

// T.C : O(n*m)
// S.C : O(n*m)
/*
    void dfs(vector <vector <char>> &grid, int r, int c) {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] != '1') return;
        grid[r][c] = '2';
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0) return 0;
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;

*/