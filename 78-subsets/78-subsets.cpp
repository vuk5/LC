class Solution {
    void recurse(int ind,vector<int> nums,vector<int>&ds,vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(ds);
            return;
        }
     ds.push_back(nums[ind]);
    recurse(ind+1,nums,ds,ans);
        ds.pop_back();
        recurse(ind+1,nums,ds,ans);
        
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>>ans;
        recurse(0,nums,ds,ans);
        return ans;
        
    }
};