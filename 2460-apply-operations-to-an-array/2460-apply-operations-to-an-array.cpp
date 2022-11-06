class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
         if(nums[i]==nums[i+1]){
             nums[i]*=2;nums[i+1]=0;
         }   
        }
        vector<int> ans;
        int c=0;
        for(auto it:nums){
            if(it==0)c++;
            else ans.push_back(it);
        }
        while(c--){
            ans.push_back(0);
        }
        return ans;
    }
};