class Solution {
    // int f(int n,int m,vector<vector<int>> nums,vector<vector<int>>&ans){
    //     if(m<0 or n<0)return 0;
    //     if(nums[n][m]==1)return 0;
    //     if(m==0 and n==0)return 1;
    //     if(m<0 or n<0)return 0;
    //     if(ans[n][m]!=-1)return ans[n][m];
    //     int top=f(n-1,m,nums,ans);
    //     int left=f(n,m-1,nums,ans);
    //     return ans[n][m]=top+left;
    // }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<int> prev(m,0);
        for(int i=0;i<n;i++){
            vector<int> cur(m,0);
            for(int j=0;j<m;j++){
                if(nums[i][j]==1)cur[j]=0;
                else if(i==0 and j==0)cur[j]=1;
                
               else{ int top=0,left=0;
                if(i>0)top=prev[j];
                if(j>0) left=cur[j-1];
                cur[j]=top+left;
                   }
            }
            prev=cur;
        }
        return prev[m-1];
    }
};