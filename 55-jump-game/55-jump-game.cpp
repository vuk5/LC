class Solution {
    // bool f(int ind,vector<int> nums,vector<int>& ans){
    //     if(ind>=nums.size())return false;
    //     if(ind==nums.size()-1)return true;
    //     if(ans[ind]!=-1)return ans[ind];
    //     for(int i=ind+1;i<=nums[ind]+ind;i++){
    //         if(f(i,nums,ans))return ans[ind]= true;
    //     }
    //     return ans[ind]=false;
    // }
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int minjump=0;
        for(int i=n-2;i>=0;i--){
            minjump++;
            if(nums[i]>=minjump)
                minjump=0;
        }
        if(minjump==0)return true;
        return false;
        
    }
};