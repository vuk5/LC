class Solution {
   int f(int i,int j, vector<vector<int>>& triangle,int n,vector<vector<int>> &ans){
        if(i==n)return triangle[i][j];
        if(ans[i][j]!=-1)return ans[i][j];
        return ans[i][j]= min(f(i+1,j,triangle,n,ans)+triangle[i][j],f(i+1,j+1,triangle,n,ans)+triangle[i][j]);
        
        
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> ans(n,vector<int>(n,-1));
        return f(0,0,triangle,n-1,ans);
    }
};