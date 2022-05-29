class Solution {
    void recurse(int ind,vector<int> nums,vector<int> &ds,vector<vector<int>> &ans,int k){
        if(ind==nums.size() or k==0){
            if(k==0){
                ans.push_back(ds);
                return;
            }
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind and nums[i]==nums[i-1])continue;
            if(nums[i]<=k){
                ds.push_back(nums[i]);
                recurse(i+1,nums,ds,ans,k-nums[i]);
                ds.pop_back();
            }
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        recurse(0,nums,ds,ans,k);
        return ans;
    }
};