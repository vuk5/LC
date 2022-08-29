class Solution {
public:
    void f(int ind,vector<int>nums,vector<vector<int>>&ans,vector<int>&ds,int target){
        if(ind==nums.size()){
            if(target==0){
            ans.push_back(ds);
        }
            return;
        }
       
        if(nums[ind]<=target)
        {   ds.push_back(nums[ind]);
            f(ind,nums,ans,ds,target-nums[ind]);
         ds.pop_back();
        }
         f(ind+1,nums,ans,ds,target);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,nums,ans,ds,target);
        return ans;
    }
};