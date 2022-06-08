class Solution {
    int f(int i,int j,vector<vector<int>>&ans,vector<vector<int>>& grid){
        if(i<0 or j<0)return 1000000009;
        if(i==0 and j==0)return grid[i][j];
        if(ans[i][j]!=-1)return ans[i][j];
        int top=grid[i][j]+f(i-1,j,ans,grid);
        int left=grid[i][j]+f(i,j-1,ans,grid);
        return ans[i][j]=min(top,left);
        
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
       int mini=INT_MAX;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m,-1));
        return f(n-1,m-1,ans,grid);
        
    }
};