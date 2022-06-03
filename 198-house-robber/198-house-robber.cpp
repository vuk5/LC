class Solution {
    
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
           int take=nums[i];
            if(i>=2)take+=ans[i-2];
            int nottake=ans[i-1];
            ans[i]=max(take,nottake);
        }
        return ans[n-1];
        
    }
};