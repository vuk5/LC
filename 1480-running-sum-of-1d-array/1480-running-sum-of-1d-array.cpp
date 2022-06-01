class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int> prefix(nums.size(),0);
        // prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};