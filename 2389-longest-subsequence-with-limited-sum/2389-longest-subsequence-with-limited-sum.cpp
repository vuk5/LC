class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        vector<int> ans(nums.size()),res;
        sort(nums.begin(),nums.end());
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]+nums[i];
        }
        for(int i=0;i<q.size();i++){
            res.push_back(upper_bound(ans.begin(),ans.end(),q[i])-ans.begin());
        }
        return res;
    }
    
};