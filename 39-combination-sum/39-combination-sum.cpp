class Solution {
    
void recurse(int ind,vector<int> nums,vector<vector<int>>&ans,vector<int> &ds,int target){
    if(ind==nums.size()){
        if(target==0){
            ans.push_back(ds);
            
        }
        return;
    }
    if(nums[ind]<=target){
        ds.push_back(nums[ind]);
        recurse(ind,nums,ans,ds,target-nums[ind]);
        ds.pop_back();
    }
    recurse(ind+1,nums,ans,ds,target);
}

  public:
    vector < vector < int >> combinationSum(vector < int > & nums, int target) {
      vector<vector<int>> ans;
        vector<int> ds;
        recurse(0,nums,ans,ds,target);
        return ans;
    }

    
};