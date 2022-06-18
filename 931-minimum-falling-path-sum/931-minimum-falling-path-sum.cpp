class Solution {
   
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
      int n = matrix.size();
    int m = matrix[0].size();
    
    vector<vector<int>> ans(n,vector<int>(m,0));
    
    // Initializing first row - base condition
    for(int j=0; j<m; j++){
        ans[0][j] = matrix[0][j];
    }
    
    for(int i=1; i<n; i++){
        for(int j=0;j<m;j++){
            
            int up = matrix[i][j] + ans[i-1][j];
            
            int leftDiagonal= matrix[i][j];
            if(j-1>=0) leftDiagonal += ans[i-1][j-1];
            else leftDiagonal += 1e9;
            
            int rightDiagonal = matrix[i][j];
            if(j+1<m) rightDiagonal += ans[i-1][j+1];
            else rightDiagonal += 1e9;
            
            ans[i][j] = min(up, min(leftDiagonal,rightDiagonal));
            
        }
    }
        int mini=INT_MAX;
        for(int j=0;j<m;j++){
            mini=min(mini,ans[n-1][j]);
        }
        return mini;
    }
};
