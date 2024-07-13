class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                for(int itemp=i;itemp<i+3;itemp++){
                    for(int jtemp=j;jtemp<j+3;jtemp++){
                        ans[i][j]=max(ans[i][j],grid[itemp][jtemp]);
                    }
                }
            }
        }
            return ans;
        
    }
};