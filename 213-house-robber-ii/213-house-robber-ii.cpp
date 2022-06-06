class Solution {
    int f(vector<int> ans,vector<int> &nums){
       int prev2=0;
        int prev1=ans[0];
        for(int i=1;i<ans.size();i++){
            int take=ans[i]+prev2;
            int nottake=prev1;
            int cur=max(take,nottake);
            prev2=prev1;
            prev1=cur;
        }
        return prev1;
    }
public:
    int rob(vector<int>& nums) {
        vector<int> v1,v2;
        int n=nums.size();
        if(n==1)return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0)v1.push_back(nums[i]);
            if(i!=n-1)v2.push_back(nums[i]);
        }
        // cout<<f(v2,nums);
        // cout<<f(v1,nums);
        
        return max(f(v1,nums),f(v2,nums));
    }
};