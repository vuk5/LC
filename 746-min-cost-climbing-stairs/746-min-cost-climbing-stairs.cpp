class Solution {
    int f(int ind,vector<int>cost,vector<int>& dp){
        if(ind==0 or ind==1)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int left=f(ind-1,cost,dp)+cost[ind-1];
        int right=f(ind-2,cost,dp)+cost[ind-2];
        return  dp[ind]=min(left,right);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        f(n,cost,dp);
        return dp[n];
    }
};