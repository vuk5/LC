class Solution {
   
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> prev(n,0);
        
       for(int j=0;j<n;j++)
           prev[j]=triangle[n-1][j];
        
       for(int i=n-2;i>=0;i--){
           vector<int> cur(n,0);
           for(int j=i;j>=0;j--){
               int dow=triangle[i][j]+prev[j];
               int down=triangle[i][j]+prev[j+1];
               cur[j]=min(dow,down);
           }
           prev=cur;
       }
        return prev[0];
        
        }
};