class Solution {
    int f(int n,int m,vector<vector<int>> nums,vector<vector<int>>&ans){
        if(m<0 or n<0)return 0;
        if(nums[n][m]==1)return 0;
        if(m==0 and n==0)return 1;
        if(m<0 or n<0)return 0;
        if(ans[n][m]!=-1)return ans[n][m];
        int top=f(n-1,m,nums,ans);
        int left=f(n,m-1,nums,ans);
        return ans[n][m]=top+left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>> ans(n,vector<int>(m,-1));
        return f(n-1,m-1,nums,ans);
    }
};