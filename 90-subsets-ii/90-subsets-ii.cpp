class Solution {
public:
    void f(int ind,vector<int> nums,vector<vector<int>>&ans,vector<int>&ds,set<vector<int>>&s){
        if(ind==nums.size()){
            s.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        f(ind+1,nums,ans,ds,s);
        ds.pop_back();
        f(ind+1,nums,ans,ds,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,nums,ans,ds,s);
        ans.assign(s.begin(),s.end());
        return ans;
    }
};
