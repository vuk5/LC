class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        return sum-mini*nums.size();
    }
};