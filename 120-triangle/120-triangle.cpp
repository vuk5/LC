class Solution {
   
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> ans(n,vector<int>(n,-1));
        
       for(int j=0;j<n;j++)
           ans[n-1][j]=triangle[n-1][j];
        
       for(int i=n-2;i>=0;i--){
           for(int j=i;j>=0;j--){
               int dow=triangle[i][j]+ans[i+1][j];
               int down=triangle[i][j]+ans[i+1][j+1];
               ans[i][j]=min(dow,down);
           }
       }
        return ans[0][0];
        
        }
};