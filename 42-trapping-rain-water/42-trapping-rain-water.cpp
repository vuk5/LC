class Solution {
public:
    int trap(vector<int>& nums) {
        vector<int> prefix(nums.size()),suffix(nums.size());
        prefix[0]=nums[0];
        suffix[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            prefix[i]=max(nums[i],prefix[i-1]);
        }
        
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=max(nums[i],suffix[i+1]);
        }
       
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=min(prefix[i],suffix[i])-nums[i];
        }
        return count;
        
    }
};