class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3 ==0){
                continue;
            }
            if((nums[i]+1)%3==0 or (nums[i]-1)%3==0){
                count+=1;
            }
        }
        return count;
    }
};