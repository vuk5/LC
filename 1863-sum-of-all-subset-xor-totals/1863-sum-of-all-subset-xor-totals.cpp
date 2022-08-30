class Solution {
public:
    void f(int ind,int&sum,vector<int>&nums,vector<int>&ans){
        if(ind==nums.size()){
            int x=0;
           
            for(auto it:ans)x^=it;
            sum+=x;
            return;
        }
        ans.push_back(nums[ind]);
        f(ind+1,sum,nums,ans);
        ans.pop_back();
        f(ind+1,sum,nums,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        f(0,sum,nums,ans);
        return sum;
        
    }
};