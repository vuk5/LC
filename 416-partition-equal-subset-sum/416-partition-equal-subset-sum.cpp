class Solution {
    // bool f(int ind,vector<int>&nums,int target,vector<vector<int>> ans){
    //     if(ind==0)return nums[ind]==target;
    //     if(target==0)return true;
    //     if(ans[ind][target]!=-1)return ans[ind][target];
    //     bool take=false;
    //     if(nums[ind]<=target)take=f(ind-1,nums,target-nums[ind],ans);
    //     int nottake=f(ind-1,nums,target,ans);
    //     return ans[ind][target]= take or nottake;
    // }
public:
    bool canPartition(vector<int>& nums) {
      int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        if(sum%2!=0)return false;
        int target=sum/2;
        vector<vector<bool>> ans(nums.size(),vector<bool>(target+1,0));
        for(int i=0;i<nums.size();i++){
            ans[i][0]=true;
        }
        if(nums[0]<=target){ans[0][nums[0]]=true;}
        
        for(int ind=1;ind<nums.size();ind++){
            for(int tar=1;tar<=target;tar++){
                bool nottake=ans[ind-1][tar];
                bool take=false;
                if(nums[ind]<=tar)take=ans[ind-1][tar-nums[ind]];
                ans[ind][tar]=take or nottake;
            }
        }
        
        return ans[nums.size()-1][target];
    }
};